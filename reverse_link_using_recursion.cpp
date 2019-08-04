#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node* next;
};
node* head=NULL;
void revList(node* head)
{  if(head==NULL)
    return;
    revList(head->next);
    cout<<head->val<<endl;
}
createnode(int x)
{
    node* temp=new node;
    temp->val=x;
    temp->next=NULL;
    if(head==NULL)
        head=temp;
    else
    {
        temp->next=head;
        head=temp;
    }
}
int main()
{
createnode(2);
createnode(4);
createnode(6);
node*temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<endl;
    temp=temp->next;

}
revList(head);
}


