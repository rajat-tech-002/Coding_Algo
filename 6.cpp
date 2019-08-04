#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[]={1,2,3,2,1,6,2,4,5,3,2};
    vector<int>B={1,2,3,2,1,6,2,4,5,3,2};
    //sort(B.begin(),B.end());

    //for(auto x:B)
      //  cout<<x;
int s=sizeof(A)/sizeof(A[0]);
sort(A,A+s);
for(int i=0;i<s;i++)
    cout<<A[i];

}
