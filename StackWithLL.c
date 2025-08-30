#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};
struct node *head=NULL;
void push(){
    int val;
    struct node* ptr=(struct node* ) malloc(sizeof(struct node));
    printf("Enter val");
    scanf("%d",&val);
    ptr->val = val;

    if (head==NULL){
        ptr->next=NULL;
        head=ptr;
    }else{
        ptr->val=val;
        ptr->next=head;
        head=ptr;
    }
}
void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    push();
    push();
    display();
    return 0;
}
