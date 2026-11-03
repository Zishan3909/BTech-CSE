// Write an algorithm and a program to implement following types of traversing in the tree:
// a) inorder() - (1) traverse left subtree, (2) traverse root, (3) traverse right subtree
// b) postorder() - (1) traverse root, (2) traverse left subtree, (3) traverse right subtree
// c) preorder() - (1) traverse left subtree, (2) traverse right subtree, (3) traverse root
// Input Format: 
// First line of input will take size of array form of tree. Size of array will be on the basis of full
// binary tree. 
// Second line of input contains n space-separated integers describing tree in the form of array.
// Output Format: 
// First output line will give inorder traversal of the tree.
// Second output line will give postorder traversal of the tree.
// Third output line will give preorder traversal of the tree.
// Sample:
// Input:
// 15
// 1 2 3 4 -1 5 6 7 8 -1 -1 9 -1 -1 -1
// Output:
// Inorder : 7 4 8 2 1 9 5 3 6
// Postorder : 7 8 4 2 9 5 6 3 1
// Preorder : 1 2 4 7 8 3 5 9 6
#include <stdio.h>

int tree[100];
int n;

// Inorder Traversal
void inorder(int i) {
    if (i >= n || tree[i] == -1)
        return;

    inorder(2 * i + 1);

    printf("%d ", tree[i]);

    inorder(2 * i + 2);
}

// Postorder Traversal
void postorder(int i) {
    if (i >= n || tree[i] == -1)
        return;

    postorder(2 * i + 1);

    postorder(2 * i + 2);

    printf("%d ", tree[i]);
}

// Preorder Traversal
void preorder(int i) {
    if (i >= n || tree[i] == -1)
        return;

    printf("%d ", tree[i]);

    preorder(2 * i + 1);

    preorder(2 * i + 2);
}

int main() {
    int i;

    printf("Enter size of tree: ");
    scanf("%d", &n);

    printf("Enter tree elements: ");

    for (i = 0; i < n; i++) {
        scanf("%d", &tree[i]);
    }

    printf("\nInorder : ");
    inorder(0);

    printf("\nPostorder : ");
    postorder(0);

    printf("\nPreorder : ");
    preorder(0);

    return 0;
}
