#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> A;
    A[2]=6;
    A[3]=7;


    A[5]=8;

    for(auto x:A)
        cout<<x.first<<" "<<x.second<<endl;

    cout<<(A.size())<<endl;
    //cout<<(A.rbegin())->first;




}
