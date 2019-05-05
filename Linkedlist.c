struct node* next;#include<stdio>
struct node
{
struct  node *next=NULL;
int val;
}node;
struct node *head = NULL;
struct node *current = NULL;


int main()
{
instinit(1);
instinit(2);
instinit(3);
printf("enter the choice\n");
printf("1--insert at postion\n2-- delete at postion\n 3--traverse \n 4--reverse");
scanf("%d",&ch);
switch(ch)
{
case 1:
        printf("enter the new data\n and enter the postion to insert" );
        scanf("%d%d",data,pos);
        head=insertpos(head,data,pos);
	break;
case 2:
        printf("enter the postion to delete\n");
        scanf("%d",pos);
        head= delete(head,pos);
	break;
case 3:
        traversal();
	break;
case 4:
        reverse();
	break;
default:
	printf("enter the right choice\n");
	break

}

}
return 0;

}
void reverse(struct node** head_ref) {
   struct node* prev   = NULL;
   struct node* current = *head_ref;
   struct node* next;
 while (current != NULL) {
      next  = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

   *head_ref = prev;
}

void traversal() {
   struct node *ptr = head;
   while(ptr != NULL) {
      printf("(%d,%d) ",ptr->data);
      ptr = ptr->next;
   }

}

node *deletepos(node *head, int element) {
    node *ptr = NULL;
   while (head) {
      if (head->data == data) {
         ptr = head;
         break;
      }
      head = head->next;
   }
   node  ptr;
   if (temp == NULL) {
      cout << "Node to be deleted not found ... " << endl;
   }
   else {
      if (temp == head) {
         head = head->next;
         delete temp;
      }
      else {
         node *ptr = head;
         while (ptr->next != temp) {
            ptr = ptr->next;
         }
         ptr->next = temp->next;
         delete temp;
      }
   }
   return head;
}


void instinit(int data) {
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = head;
   head = link;
}

void insertpos(node *head,int data, int pos) {
   node *ptr = NULL;
   while (head) {
      if (head->data == data) {
         ptr = head;
         break;
      }
      head = head->next;
   }
   node temp *ptr;
   if (temp == NULL) {
      cout << "Element not found ... " << endl;
   }
   else {
      node *ptr = getNewNode(data);
      if (temp->next == NULL) {
         temp->next = ptr;
      }
      else {
         ptr->next = temp->next;
         temp->next = ptr;
      }
   }
   return head;
}

