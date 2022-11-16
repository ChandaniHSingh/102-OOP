//Name : Chandani singh 
//Roll no: 124

#include <stdio.h>
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
      //fprintf(fp,"\nNode Inserted at First...");
   } else {
      head->prev = nn;
      nn->next = head;
      head = nn;
      printf("\nNode Inserted at First...");
      //fprintf(fp,"\nNode Inserted at First...");
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
      //fprintf(fp,"\nNode Inserted at First...");
   } else {
      last->next = nn;
      nn->prev = last;
      last = nn;
      printf("\nNode Inserted at Last...");
      //fprintf(fp,"\nNode Inserted at Last...");
   }
}

void deleteFirst() {

   if(isEmpty()) {
      printf("\nList is Empty...");
      //fprintf(fp,"\nList is Empty....");
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
      //fprintf(fp,"\nNode Deleteed at First...");
   }
}

void deleteLast() {

   if(isEmpty()) {
      printf("\nList is Empty...");
      //fprintf(fp,"\nList is Empty....");
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
      //fprintf(fp,"\nNode Deleteed at Last...");
   }
}

void displayForward() {

   if(isEmpty()) {
      printf("\nList is Empty...");
      //fprintf(fp,"\nList is Empty....");
   } 
   else {
      struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp = head;
      printf("\nDisplay Forward...");
      //fprintf(fp,"\nDisplay Forward...");
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
      //fprintf(fp,"\nList is Empty....");
   } 
   else {
      struct node *temp = (struct node*)malloc(sizeof(struct node));
      temp = last;
      printf("\nDisplay Backward...");
      //fprintf(fp,"\nDisplay Backward...");
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
   
FILE *fp; //filepointer
    fp = fopen("8op.txt","w"); // Here "w" refers to write on file
    if(fp == NULL)
    {
        printf("Error! The file does not exist.");
        exit(0);
    }
   while(c!=4){
      printf("\n=================");
      fprintf(fp,"\n=================");
      printf("\nOptions");
      fprintf(fp,"\nOptions");
      printf("\n=================");
      fprintf(fp,"\n=================");
      printf("\n1 - Insert");
      fprintf(fp,"\n1 - Insert");
      printf("\n2 - Delete");
      fprintf(fp,"\n2 - Delete");
      printf("\n3 - Display");
      fprintf(fp,"\n3 - Display");
      printf("\n4 - Exit");
      fprintf(fp,"\n4 - Exit");
      printf("\nEnter Your Choice : ");
      fprintf(fp,"\nEnter Your Choice : ");
      scanf("%d",&c);
      fprintf(fp,"%d",c);
      switch(c){
            case 1:
               printf("\n=================");
               fprintf(fp,"\n=================");
               printf("\nOptions for Insertion  : ");
               fprintf(fp,"\nOptions for Insertion  : ");
               printf("\n1 - At Begin");
               fprintf(fp,"\n1 - At Begin");
               printf("\n2 - At End");   
               fprintf(fp,"\n2 - At End");   
               printf("\nEnter  Your Choice : ");
               fprintf(fp,"\nEnter  Your Choice : ");
               scanf("%d",&ch);
               fprintf(fp,"%d",ch);
               switch(ch){
                  case 1:
                        printf("\nEnter Data : ");
                        fprintf(fp,"\nEnter Data : ");
                        scanf("%d",&data);
                        fprintf(fp,"%d",data);
                        insertFirst(data);
                        break;
                  case 2:
                        printf("\nEnter Data : ");
                        fprintf(fp,"\nEnter Data : ");
                        scanf("%d",&data);
                        fprintf(fp,"%d",data);
                        insertLast(data);
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        fprintf(fp,"\nPlease select valid Choice....");
                        break;
               }
               break;               
            case 2:
               if(isEmpty()){
                  printf("\nList is Empty....");
                  fprintf(fp,"\nList is Empty....");
                  break;
               }
               printf("\n=================");
               fprintf(fp,"\n=================");
               printf("\nOptions for Deletion  : ");
               fprintf(fp,"\nOptions for Deletion  : ");
               printf("\n1 - At Begin");
               fprintf(fp,"\n1 - At Begin");
               printf("\n2 - At End");  
               fprintf(fp,"\n2 - At End");  
               printf("\nEnter  Your Choice : ");
               fprintf(fp,"\nEnter  Your Choice : ");
               scanf("%d",&ch);
               fprintf(fp,"%d",ch);
               switch(ch){
                  case 1:
                     deleteFirst();
                        break;
                  case 2:
                        deleteLast();
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        fprintf(fp,"\nPlease select valid Choice....");
                        break;
               }

               break; 
            case 3:
               if(isEmpty()){
                  printf("\nList is Empty....");
                  fprintf(fp,"\nList is Empty....");
                  break;
               }

               printf("\n=================");
               fprintf(fp,"\n=================");
               printf("\nOptions for Display  : ");
               fprintf(fp,"\nOptions for Display  : ");
               printf("\n1 - Display Forward");
               fprintf(fp,"\n1 - Display Forward");
               printf("\n2 - Display Backward");
               fprintf(fp,"\n2 - Display Backward");  
               printf("\nEnter  Your Choice : ");
               fprintf(fp,"\nEnter  Your Choice : ");
               scanf("%d",&ch);
               fprintf(fp,"%d",ch);
               switch(ch){
                  case 1:
                     displayForward();
                        break;
                  case 2:
                      displayBackward();
                        break;
                  default :
                        printf("\nPlease select valid Choice....");
                        fprintf(fp,"\nPlease select valid Choice....");
                        break;
               }
               break;
            case 4:
               break;
            default:
               printf("\nPlease enter valid choice....");
               fprintf(fp,"\nPlease select valid Choice....");
               break;
      }
   }
   
         fclose(fp);
    return 0;
}
