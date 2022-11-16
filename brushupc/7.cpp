//Name : Chandani singh 
//Roll no: 124

#include<stdio.h>
#include<stdlib.h>
struct node {
   int data;
	
   struct node *next;
   struct node *prev;
};
// head pointer
struct node *head = NULL;
struct node *last = NULL;

bool isEmpty(){
	if(head==NULL)
	    return true;
	else
	    return false;
}

void insertFirst(int data) {

   struct node *nn = (struct node*)malloc(sizeof(struct node));;
   nn->data = data;
   nn->prev = NULL;
   nn->next = NULL;
   if(head == NULL) {
      head = nn;
      last = nn;
      printf("\nNode Inserted at First...");
   } else {
      head->prev = nn;
      nn->next = head;
      head = nn;
      printf("\nNode Inserted at First...");
   }
}

void insertLast(int data) {

   struct node *nn = (struct node*)malloc(sizeof(struct node));;
   nn->data = data;
   nn->prev = NULL;
   nn->next = NULL;
   if(isEmpty()) {
      head = nn;
      last = nn;
      printf("\nNode Inserted at First...");
   } else {
      last->next = nn;
      nn->prev = last;
      last = nn;
      printf("\nNode Inserted at Last...");
   }
}

void deleteFirst() {

   if(isEmpty()) {
      printf("\nList is Empty...");
   } 
   else {
      if(head->next != NULL)
      {
         head = head->next;
         head->prev = NULL;
      }
      else 
         last = head = NULL;
      printf("\nNode Deleteed at First...");
   }
}

void deleteLast() {

   if(isEmpty()) {
      printf("\nList is Empty...");
   } 
   else {
      if(last->prev != NULL)
      {   
         last = last->prev;
         last->next = NULL;
      }
      else 
         last = head = NULL;
      printf("\nNode Deleted at Last...");
   }
}

void displayForward() {

   if(isEmpty()) {
      printf("\nList is Empty...");
   } 
   else {
      struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp = head;
      printf("\nDisplay Forward...");
      while(temp != NULL)
      {
         printf("\n%d  ",temp->data);
         temp = temp->next;
      }
      
   }
}

void displayBackward() {

   if(isEmpty()) {
      printf("\nList is Empty...");
   } 
   else {
      struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp = last;
      printf("\nDisplay Backward...");
      while(temp != NULL)
      {
         printf("\n%d  ",temp->data);
         temp = temp->prev;
      }
      
   }
}

int main()
{
   int data;
   int ch=0,c=0;
   while(c != 4){
      printf("\n=================");
      printf("\nOptions");
      printf("\n=================");
      printf("\n1 - Insert");
      printf("\n2 - Delete");
      printf("\n3 - Display");
      printf("\n4 - Exit");
      printf("\nEnter Your Choice : ");
      scanf("%d",&c);
      switch(c){
            case 1:
               printf("\n=================");
               printf("\nOptions for Insertion  : ");
               printf("\n1 - At Begin");
               printf("\n2 - At End");   
               printf("\nEnter  Your Choice : ");
               scanf("%d",&ch);
               switch(ch){
                  case 1:
                        printf("\nEnter Data : ");
                        scanf("%d",&data);
                        insertFirst(data);
                        break;
                  case 2:
                        printf("\nEnter Data : ");
                        scanf("%d",&data);
                        insertLast(data);
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        break;
               }
               break;               
            case 2:
               if(isEmpty()){
                  printf("\nList is Empty....");
                  break;
               }
               printf("\n=================");
               printf("\nOptions for Deletion  : ");
               printf("\n1 - At Begin");
               printf("\n2 - At End");  
               printf("\nEnter  Your Choice : ");
               scanf("%d",&ch);
               switch(ch){
                  case 1:
                     deleteFirst();
                        break;
                  case 2:
                        deleteLast();
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        break;
               }

               break; 
            case 3:
               if(isEmpty()){
                  printf("\nList is Empty....");
                  break;
               }

               printf("\n=================");
               printf("\nOptions for Display  : ");
               printf("\n1 - Display Forward");
               printf("\n2 - Display Backward");  
               printf("\nEnter  Your Choice : ");
               scanf("%d",&ch);
               switch(ch){
                  case 1:
                     displayForward();
                        break;
                  case 2:
                      displayBackward();
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        break;
               }
               break;
            case 4:
               break;
            default:
               printf("\nPlease enter valid choice....");
               break;
      }
   }

    return 0;
}