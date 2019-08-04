#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node*left;
    node*right;
};
void print_level_order(node* root)
{   if(root==NULL)
    return;
    cout<<root->data;
    print_level_order(root->left);
    print_level_order(root->right);

}
node* create_node(int data)
{
    node* temp=new node;
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
int main()
{ node* root=create_node(1);
 root->left=create_node(2);
 root->right=create_node(3);
 root->left->left=create_node(4);
root->left->right=create_node(5);
root->right->left=create_node(6);
root->right->right=create_node(7);
 print_level_order(root);


}
