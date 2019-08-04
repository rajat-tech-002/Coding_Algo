#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//func which takes input as A[i], its index and the array A

bool func(int element, int index, int arr[])
{ // if the element is even , return true else false
    if(element%2==0)
        return true;
    else return false;
}
// declare a global vector to store the filtered elements of array

vector<int> V;

// filter function which takes input as array, it's size, and func as an argument

void _filter(int arr[],int n,bool (*func)(int,int,int*))
{
// Iterate over elements to find out whether it is even or not

     for(int i=0;i<n;i++)
    {// pass array element to function and if it returns true store it in vector.
        if(func(arr[i],i,arr)==true)
           {
             V.push_back(arr[i]);
           }
    }

}

int main()
{
    int A[]={1,2,3,4,5,8,10,56,12,80};

    cout<<"Initial Array\n";
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
        cout<<endl;

    // call filter function

   _filter(A,n,func);

   //print vector elements
   cout<<"Filtered Elements\n";

   for(auto x:V)
    cout<<x<<" ";
}
