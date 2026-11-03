// Design an algorithm to implement binary trees. Write a program which implements following
// basic operations on binary tree:
// a) CreateTree() - creates a root node
// b) InsertNode() - insert a node in tree
// c) DeleteNode() - delete a node from tree
// d) FindHeight() - find the height of tree
// e) FindSize() - find number of nodes in tree
// f) Search() - search whether given specific element present in tree or not.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *CreateTree(int data) {
    struct Node *root = malloc(sizeof(struct Node));
    if (root == NULL) {
        return NULL;
    }

    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int FindSize(struct Node *root) {
    if (root == NULL) {
        return 0;
    }

    return 1 + FindSize(root->left) + FindSize(root->right);
}

int FindHeight(struct Node *root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = FindHeight(root->left);
    int rightHeight = FindHeight(root->right);
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

int Search(struct Node *root, int value) {
    if (root == NULL) {
        return 0;
    }
    if (root->data == value) {
        return 1;
    }

    return Search(root->left, value) || Search(root->right, value);
}

int InsertNode(struct Node *root, int value) {
    if (root == NULL) {
        return 0;
    }

    struct Node *newNode = CreateTree(value);
    if (newNode == NULL) {
        return 0;
    }

    int size = FindSize(root);
    struct Node **queue = malloc((size + 1) * sizeof(struct Node *));
    if (queue == NULL) {
        free(newNode);
        return 0;
    }

    int front = 0;
    int rear = 0;
    queue[rear++] = root;

    while (front < rear) {
        struct Node *current = queue[front++];
        if (current->left == NULL) {
            current->left = newNode;
            free(queue);
            return 1;
        }
        queue[rear++] = current->left;

        if (current->right == NULL) {
            current->right = newNode;
            free(queue);
            return 1;
        }
        queue[rear++] = current->right;
    }

    free(queue);
    free(newNode);
    return 0;
}

int DeleteNode(struct Node **root, int value) {
    if (root == NULL || *root == NULL) {
        return 0;
    }

    int size = FindSize(*root);
    struct Node **queue = malloc(size * sizeof(struct Node *));
    if (queue == NULL) {
        return 0;
    }

    int front = 0;
    int rear = 0;
    struct Node *target = NULL;
    struct Node *deepest = NULL;
    struct Node *deepestParent = NULL;
    queue[rear++] = *root;

    while (front < rear) {
        struct Node *current = queue[front++];
        if (target == NULL && current->data == value) {
            target = current;
        }

        if (current->left != NULL) {
            deepestParent = current;
            deepest = current->left;
            queue[rear++] = current->left;
        }
        if (current->right != NULL) {
            deepestParent = current;
            deepest = current->right;
            queue[rear++] = current->right;
        }
    }
    free(queue);

    if (target == NULL) {
        return 0;
    }

    if (deepest == NULL) {
        free(*root);
        *root = NULL;
        return 1;
    }

    target->data = deepest->data;
    if (deepestParent->left == deepest) {
        deepestParent->left = NULL;
    } else {
        deepestParent->right = NULL;
    }
    free(deepest);
    return 1;
}

void FreeTree(struct Node *root) {
    if (root == NULL) {
        return;
    }

    FreeTree(root->left);
    FreeTree(root->right);
    free(root);
}

int main(void) {
    struct Node *root;
    int value;
    int choice;

    printf("Enter root node value: ");
    if (scanf("%d", &value) != 1) {
        return 1;
    }

    root = CreateTree(value);
    if (root == NULL) {
        fprintf(stderr, "Unable to allocate memory for the root node\n");
        return 1;
    }

    while (1) {
        printf("\nBinary Tree Operations\n");
        printf("1. Insert node\n");
        printf("2. Delete node\n");
        printf("3. Find height\n");
        printf("4. Find size\n");
        printf("5. Search\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            FreeTree(root);
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                if (scanf("%d", &value) != 1) {
                    FreeTree(root);
                    return 1;
                }
                if (!InsertNode(root, value)) {
                    fprintf(stderr, "Unable to insert node\n");
                } else {
                    printf("Node inserted\n");
                }
                break;

            case 2:
                printf("Enter value to delete: ");
                if (scanf("%d", &value) != 1) {
                    FreeTree(root);
                    return 1;
                }
                if (DeleteNode(&root, value)) {
                    printf("Node deleted\n");
                } else {
                    printf("Value not found or unable to delete node\n");
                }
                break;

            case 3:
                printf("Height of tree: %d\n", FindHeight(root));
                break;

            case 4:
                printf("Size of tree: %d\n", FindSize(root));
                break;

            case 5:
                printf("Enter value to search: ");
                if (scanf("%d", &value) != 1) {
                    FreeTree(root);
                    return 1;
                }
                if (Search(root, value)) {
                    printf("Value is present in the tree\n");
                } else {
                    printf("Value is not present in the tree\n");
                }
                break;

            case 6:
                FreeTree(root);
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}   