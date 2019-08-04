#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void showstacks(stack<int>S[],int n)
{
    for(int i=0;i<n;i++)
    { cout<<"Showing Stack:"<<i<<endl;
        while(!S[i].empty())
        {
            cout<<S[i].top()<<" ";
            S[i].pop();

        }
        cout<<endl;
    }
}
int* func(int *arr, int temp)
{
 stack<int> S[temp];
 int k=0;
for(int i=0;i<100;i++)
{
if(k<temp)
{   S[k].push(arr[i]);
    k++;
}
else
{k=0;
    S[0].push(arr[i]);
    k++;
}
}
//Reverse Stacks
stack<int>P[temp];
for(int i=0;i<temp;i++)
{
    while(!S[i].empty())
    {
        P[i].push(S[i].top());
        S[i].pop();
    }
}
int p=0;
int x=0;
//showstacks(S,temp);
for(int i=0;i<temp;i++)
{
    while(!P[i].empty())
    {arr[x++]=P[i].top();
     P[i].pop();
    }
}

return arr;
}
int main()
{
    int m;
    cin>>m;
    if(m>10)
    {
        cout<<"Wrong Input";
        return 0;
    }
    int k[m];
    int num;


    for(int i=0;i<m;i++)
        {cin>>k[i];
        if(k[i]>13){
            cout<<"Wrong Input";
            return 0;
        }
        }
    cin>>num;

    cout<<"m:"<<m<<endl;

    for(int i=0;i<m;i++)
        cout<<"k["<<i<<"]:"<<k[i]<<endl;
    cout<<"num:"<<num<<endl;

int arr[100];
int mark[100];

for(int i=0;i<100;i++)
 {

arr[i]=i+1;
mark[i]=0;
}
int itr;
int prev=0;
int* ptr=arr;
for(int i=0;i<m;i++)
{   int temp=k[i];
    itr=i+1;
ptr=func(ptr,temp);
}




cout<<"Array"<<endl;
for(int i=0;i<100;i++)
    cout<<ptr[i]<<" ";
    cout<<endl;
int cnt_1=0;
//find the num 'th element
cout<<"Found the element:"<<arr[num];

}
