#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool findifsum(int A[],int n)
{
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(i!=j && A[i]+A[j]==0)
                return true;
        }
    }

}
int main()
{
 int arr[]={-4,-3,-2,-1,0,1,6,8,9};
 cout<<findifsum(arr,n);
}
