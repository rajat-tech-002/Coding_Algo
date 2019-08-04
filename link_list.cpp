#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node * head=NULL;
void Print()
{ node*temp=head;
while(temp!=NULL)
{
    cout<<temp->data<<endl;
    cout<<temp->next<<endl;
    temp=temp->next;
}
}
create_node(int x)
{ node* new_node=new node;
new_node->data=x;
new_node->next=NULL;
if(head==NULL)
{
head=new_node;
}
else{
new_node->next=head;
head=new_node;}
//cout<<"New_Node_Created"<<endl;
//cout<<"Data:"<<new_node->data<<endl;
//cout<<"Link:"<<new_node->next<<endl;
}

int main()
{
    create_node(2);
    create_node(4);
    create_node(6);
    Print();
}
