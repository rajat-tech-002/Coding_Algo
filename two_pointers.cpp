#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int cnt=0;
bool findifsum(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        { cnt=cnt+1;
            if(i!=j && A[i]+A[j]==0)
                return true;
            if(A[i]+A[j]<0)
                break;

        }
    }
return false;

    }


int main()
{
 int arr[]={1,2,3,4,5,6,7};
 int n=sizeof(arr)/sizeof(arr[0]);
 cout<<findifsum(arr,n);
 cout<<endl<<cnt<<endl<<n;
}
