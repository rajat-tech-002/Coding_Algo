#include<iostream>
using namespace std;

struct node{

int data;
node* left;
node* right;

};
int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
node* root=new node;

void createnode(node* &newnode,int n)
{
    node* temp=new node;
    temp->data=n;
    temp->left=NULL;
    temp->right=NULL;
    newnode=temp;

}
void inorder(node *temp)
{
    if(temp==NULL)
        return;
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);

}

int diameter(node* temp,int* height)
{

    int ld=0;
    int rd=0;

    int lh=0;
    int rh=0;
    if (temp==NULL)
        { *height=0;
            return 0;
        }

    ld=diameter(temp->left,&lh);
    rd=diameter(temp->right,&rh);

    *height= max(lh,rh)+1;

    return max(lh+rh,max(ld,rd));

}


int main()
{

createnode(root,5);
createnode(root->left,10);
createnode(root->right,20);
createnode(root->right->right,27);
createnode(root->right->left,25);
//inorder(root);
int height=0;
cout<<diameter(root,&height);

}
