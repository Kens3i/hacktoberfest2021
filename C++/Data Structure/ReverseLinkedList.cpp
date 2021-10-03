#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node **head, int val)
{
    Node *nw;
    nw = (Node*)malloc(sizeof(Node));

    nw->data= val;
    nw->next=*head;
    *head=nw;
}

void display(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }

    cout<<endl;
}

Node *reverse(Node **head)
{
    Node *curr= *head;
    Node *prev=NULL;
    Node *nex=NULL;

    while(curr!=NULL)
    {
        nex=curr->next;

        curr->next=prev;

        prev=curr;

        curr=nex;
    }

    return prev;
}

int main()
{
    Node *head= NULL;

    push(&head,1);
    push(&head,2);
    push(&head,3);
    push(&head,4);
    push(&head,5);

    display(head);

    head=reverse(&head);

    display(head);
}
