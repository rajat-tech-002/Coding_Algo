#include<iostream>
using namespace std;
#include<bits/stdc++.h>

struct node{
int value;
node* left;
node*right;
};
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
create_node(node* &temp,int value)
{   temp=new node;
    temp->value=value;
    temp->left=NULL;
    temp->right=NULL;
}
void print_preorder(node* head)
{
    if(head==NULL) return;

    print_preorder(head->left);
     cout<<head->value<<endl;
    print_preorder(head->right);


}

int height(node* root)
{ if(root==NULL)
return 0;

return 1+max(height(root->left),height(root->right));


}
int diameter(node* root)
{
    if(root==NULL)
        return 0;
    int l=height(root->left);
    int r=height(root->right);
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    return max(max(ld,rd),l+r);

}
int main()
{
    node *root=new node;
    root->value=10;
    root->left=NULL;
    root->right=NULL;
    create_node(root->left,5);
    create_node(root->left->left,2);
    create_node(root->left->right,4);
    create_node(root->left->left->left,1);
    create_node(root->left->left->left->left,4);
    create_node(root->left->left->left->left->left,4);
    create_node(root->left->left->left->left->left->left,4);
    create_node(root->right,12);
    create_node(root->left->left->right,1);
    create_node(root->left->left->right->right,1);
    create_node(root->left->left->right->right->right,1);
    create_node(root->left->left->right->right->right->right,1);
    create_node(root->left->left->right->right->right->right->right,1);
    int d=diameter(root);
    print_preorder(root);
    cout<<d;
}
