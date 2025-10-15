#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next ;
};
struct node *head ;
void insert_at_any_where(){
	int value,p;
	printf("position to insert\n");
	scanf("%d",&p);
	printf("enter value to insert");
	scanf("%d",&value);
	struct node* new_node = (struct node*)malloc(sizeof(struct node));
	new_node->data = value;
	new_node->next = NULL ;
	if(p==1){
		new_node->next = head ;
		head = new_node ;
		return ;
	}
	struct node *temp = head ;
	int i;
	for( i = 1 ; i< p - 1 && temp != NULL; i++ ){
		temp = temp->next;
	}
	if(temp == NULL){
		printf("out of bounds");
		free(new_node);
		return ;
	}
	new_node->next = temp->next;
	temp ->next = new_node;

}
void reverse(struct node **head){
	struct node *prev = NULL ;
	struct node *current = *head ;
	struct node *next = NULL;
	while(current!=NULL){
		next = current->next ;
		current->next  = prev ;
		prev  = current ;
		current = next ; 
	}
	*head = prev ;

}
void  traverseList(struct node *head){
 	struct node*temp = head ;
 	while(temp!=NULL){
 		printf("%d->",temp->data);
 		temp=temp->next;
	 }
	 printf("\n");
 }
int main(){
	int n;
	while(1){
		printf("1.insert \n2.reverse\n 3.traverse\n choose one");
		scanf("%d",&n);
		switch(n){
			case 1 : insert_at_any_where();
		            	break;
			case 2 :printf("Reversed Linked List:\n");
			         reverse(&head);
			         	traverseList(head);
			         break;
			case 3 : traverseList(head);
		        	break;
		   	default : printf("enter valid input");
		        	exit(0);
		}
	}

}
