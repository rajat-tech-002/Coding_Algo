#include<iostream>
using namespace std;
int main()

{
    int k;
   cin >>k;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int start=0, n=9;
    while(start<=n)
    {
        int mid=(start+n)/2;
        if(arr[mid]==k)
            {cout<< mid;
            return 0;
            }
        else if(arr[mid]<k)
            start=mid+1;
        else if(arr[mid]>k)
            n=mid-1;
    }
    cout<<"No element Found";

}
