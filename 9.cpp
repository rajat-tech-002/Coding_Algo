// C++ Program for counting sort
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
#define RANGE 255

// The main function that sort
// the given string arr[] in
// alphabetical order

int main()
{
    char arr[] = "geeksforgeeks";
    int n=sizeof(arr)-1;
    int A[130];
    for(int i=0;i<130;i++)
        A[i]=0;
    for(int i=0;i<n;i++)
    {
        A[int(arr[i])]++;

    }
    char arr1[n];
    int p=0;
     for(int i=0;i<130;i++)
     {
         if(A[i]>=1)
         { int temp=A[i];
         for(int k=0;k<temp;k++)
            arr1[p++]=char(i);


         }


     }

arr1[n]='\0';
    //countSort(arr);

    cout<< "Sorted character array is " << arr1;
    return 0;
}
