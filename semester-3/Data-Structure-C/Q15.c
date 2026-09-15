//Write a c program to implement deletion using linked list.
#include <stdio.h>
#include<stdlib.h>
 struct node{
    int data;
    struct node *next;
 };

 void deleteNode(struct node **head_ref, int key)
 {
     struct node *temp = *head_ref, *prev;

     if (temp != NULL && temp->data == key) {
         *head_ref = temp->next;
         free(temp);
         return;
     }

     while (temp != NULL && temp->data != key) {
         prev = temp;
         temp = temp->next;
     }

     if (temp == NULL) return;

     prev->next = temp->next;
     free(temp);
 }

 void printList(struct node *node)
 {
     while (node != NULL) {
         printf("%d -> ", node->data);
         node = node->next;
     }
     printf("NULL\n");
 }

 int main(void)
 {
     struct node *head = malloc(sizeof(struct node));
     if (head == NULL) return 1;

     head->data = 10;
     head->next = malloc(sizeof(struct node));
     if (head->next == NULL) {
         free(head);
         return 1;
     }

     head->next->data = 20;
     head->next->next = malloc(sizeof(struct node));
     if (head->next->next == NULL) {
         free(head->next);
         free(head);
         return 1;
     }

     head->next->next->data = 30;
     head->next->next->next = NULL;

     printf("Before deletion: ");
     printList(head);

     deleteNode(&head, 20);

     printf("After deletion: ");
     printList(head);

     while (head != NULL) {
         struct node *temp = head;
         head = head->next;
         free(temp);
     }

     return 0;
 }