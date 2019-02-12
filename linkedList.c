#include <stdio.h>
#include <stdlib.h>
 
struct node {
   int data;
   struct node *next;
};
 
struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
int count = 0;
 
int main () {
   int input, data;
 
   for (;;) {
      printf("1. Insert an element at beginning of linked list.\n");
      printf("2. Insert an element at end of linked list.\n");
      printf("3. Traverse linked list.\n");
      printf("4. Delete element from beginning.\n");
      printf("5. Delete element from end.\n");
      printf("6. Exit\n");
 
      scanf("%d", &input);
      switch(input)
      {
     case 1:printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_begin(data);
        break;

      case 2:printf("Enter value of element\n");
         scanf("%d", &data);
         insert_at_end(data);
            break;
      case 3: traverse();
               break;
      case 4:delete_from_begin();
               break;
      case 5: delete_from_end();
              break;

      default: exit();
  }

   }
 
   return 0;
}
 
void insert_at_begin(int x) {
   struct node *newnode;
 
   newnode = (struct node*)malloc(sizeof(struct node));
   count++;
 

   newnode ->data = x;
   newnode ->next = start;
   start = newnode;
   return 0;
}
 
void insert_at_end(int x) {
   struct node * newnode, *ptr;
 
   newnode = (struct node*)malloc(sizeof(struct node));
   count++;
 
   if (start == NULL) {
      newnode->data = x;
      newnode->next = NULL;
      start = newnode;
      return;
   }
 
   ptr = start;
 
   while (ptr ->next != NULL)
      ptr = ptr ->next;
 
   ptr ->next = newnode;
   newnode ->data    = x;
   newnode ->next    = NULL;
}
 
void traverse() {
   struct node *t;
 
   t = start;
 
   if (t == NULL) {
      printf("Linked list is empty.\n");
      return;
   }
 
   printf("There are %d elements in linked list.\n", count);
 
   while (t->next != NULL) {
      printf("%d\n", t->data);
      t = t->next;
   }
   printf("%d\n", t->data);
}
 
void delete_from_begin() {
   struct node *t;
   int n;
 
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
 
   n = start->data;
   t = start->next;
   free(start);
   start = t;
   count--;
 
   printf("%d deleted from beginning successfully.\n", n);
}
 
void delete_from_end() {
   struct node *t, *u;
   int n;
 
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }
 
   count--;
 
   if (start->next == NULL) {
      n = start->data;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }
 
   t = start;
 
   while (t->next != NULL) {
      u = t;
      t = t->next;
   }
 
   n = t->data;
   u->next = NULL;
   free(t);
 
   printf("%d deleted from end successfully.\n", n);
}

