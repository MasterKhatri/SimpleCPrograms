#include <stdio.h>
#include <stdlib.h>

struct node {
   int info;
   struct node *link;
};

struct node *start = NULL;
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
int count = 0;

int main () {
   int input, info;

   for (;;) {
      printf("1. Insert an element at beginning of circular linked list.\n");
      printf("2. Insert an element at end of circular linked list.\n");
      printf("3. Traverse linked list.\n");
      printf("4. Delete element from beginning.\n");
      printf("5. Delete element from end.\n");
      printf("6. Exit\n");

      scanf("%d", &input);
    switch(input) {
         case 1:printf("Enter value of element\n");
                scanf("%d", &info);
                insert_at_begin(info);
                break;

          case 2:printf("Enter value of element\n");
                 scanf("%d", &info);
                 insert_at_end(info);
                 break;
          case 3: traverse();
                  break;
          case 4:delete_from_begin();
                 break;
          case 5:delete_from_end();
                  break;
          default: exit(0);
        }
    }
   return 0;
}

void insert_at_begin(int x) {
   struct node *newnode, *ptr;
   newnode = (struct node*)malloc(sizeof(struct node));
   count++;
   if (start == NULL) {
      newnode->info = x;
      newnode->link = start;
      start = newnode;
      return;
   }
   newnode ->info = x;
   newnode ->link = start;
   start = newnode;
   ptr = start;
   do {
        ptr = ptr -> link;
   } while(ptr->link != start);
}

void insert_at_end(int x) {
   struct node *newnode, *ptr;

   newnode = (struct node*)malloc(sizeof(struct node));
   count++;

   if (start == NULL) {
      newnode->info = x;
      newnode->link = NULL;
      start = newnode;
      return;
   }
   newnode -> info = x;
   ptr = start;
   do {
       ptr = ptr->link;
   } while(ptr ->link != start);
   ptr->link = newnode;
   newnode ->info = x;
   newnode ->link = NULL;
}

void traverse() {
   struct node *ptr;

   ptr = start;

   if (ptr == NULL) {
      printf("Linked list is empty.\n");
      return;
   }

   printf("There are %d elements in linked list.\n", count);

   while (ptr != NULL) {
      printf("%d\n", ptr->info);
      ptr = ptr->link;
   }
}

void delete_from_begin() {
   struct node *ptr;
   int n;
   n = start->info;
   start = start->link;
   free(ptr);
   ptr = start;
   do {
        ptr = ptr->link;
   } while(ptr->link != start);
   ptr->link = start;
   count--;
   printf("%d deleted from beginning successfully.\n", n);
}

void delete_from_end() {
   struct node *ptr, *preptr;
   int n;
   if (start == NULL) {
      printf("Linked list is already empty.\n");
      return;
   }

   count--;

   if (start->link == NULL) {
      n = start->info;
      free(start);
      start = NULL;
      printf("%d deleted from end successfully.\n", n);
      return;
   }

   ptr = preptr = start;
   do {

    preptr = ptr;
    ptr = ptr->link;

   } while(ptr->link != start);
   preptr->link = start;
   free(ptr);
}
