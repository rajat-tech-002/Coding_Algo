#include<stdio.h>
using namespace std;
#include<bits/stdc++.h>
void countSort(int arr[],int n,int exp)
{
    int output[n];
    int count[10]={0};

    for (int i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    //cumulative
    for (int i = 1; i < 10; i++)
         count[i]+=count[i-1];

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];

}
int getMax(int arr[],int n)
{
    int m=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
            m=arr[i];
    }
    return m;
}
void radixsort(int arr[],int n)
{int m=getMax(arr,n);
int it;
for(int it=1;m/it>0;it=it*10)
{
    countSort(arr,n,it);

}

}


void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;


}
