#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> getRow(int A) {
    vector<int> temp;
    vector<vector<int>>B;
    temp.push_back(1);
    B.push_back(temp);

    for(int i=1;i<A;i++)
    {vector<int> temp2;
    temp2.push_back(1);
    for(int j=1;j<i;j++)
    {
        temp2.push_back(temp[j]+temp[j-1]);
    }
    temp2.push_back(1);
    temp=temp2;
    B.push_back(temp2);

    }
    return temp;
}

int main()
{
    int A=5;
vector<int> temp=getRow(A);
for(auto x:temp)
    cout<<x<<endl;


}

