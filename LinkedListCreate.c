#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void printList(struct node *head){
    struct node *current=head;
    while (current!=NULL){
        printf("%d -> ",current->data);
        current=current->next;
    }
    printf("NULL\n");
}
int main(){
    struct node *head=NULL;
    struct node *fir=NULL;
    struct node *sec=NULL;
    struct node *thir=NULL;
    struct node *four=NULL;
    struct node *fifth=NULL;
    struct node *sixth=NULL;

    head=(struct node *)malloc(sizeof(struct node));
    fir=(struct node *)malloc(sizeof(struct node));
    sec=(struct node *)malloc(sizeof(struct node));
    thir=(struct node *)malloc(sizeof(struct node));
    four=(struct node *)malloc(sizeof(struct node));
    fifth=(struct node *)malloc(sizeof(struct node));
    sixth=(struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = fir;
    fir->data = 20;
    fir->next = sec;
    sec->data = 30;
    sec->next = thir;
    thir->data = 40;
    thir->next = four;
    four->data = 50;
    four->next = fifth;
    fifth->data = 60;
    fifth->next = sixth;
    sixth->data = 70;
    sixth->next = NULL;
    printList(head);
    return 0;
}

