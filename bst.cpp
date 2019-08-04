#include<iostream>
using namespace std;
#include<bits/stdc++.h>
struct node{
int value;
node* left;
node* right;
};

void fill_bst(node* &root,int value)
{
if(root==NULL)
{
    node* temp=new node;
    temp->value=value;
    temp->left=NULL;
    temp->right=NULL;
    root=temp;
    return;
}
  if(value>root->value)
        fill_bst(root->right,value);
  else
        fill_bst(root->left,value);


}
void print_inorder(node* root)
{
    if(root==NULL)
        return;
    print_inorder(root->left);
    cout<<root->value<<endl;
    print_inorder(root->right);
}
int main()
{
    node* root=new node;
    root->value=10;
    root->left=NULL;
    root->right=NULL;
    fill_bst(root,12);
    fill_bst(root,13);
    fill_bst(root,2);
    fill_bst(root,5);
    fill_bst(root,8);
    fill_bst(root,1);
    fill_bst(root,11);
    print_inorder(root);

}
