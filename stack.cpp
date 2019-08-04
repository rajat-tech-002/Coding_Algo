#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Print(stack <int>A )
{
while(!A.empty())
{
    cout<<A.top()<<endl;
    A.pop();

}
}
int main()
{

    stack<int> A;
    A.push(2);
    A.push(5);
    A.push(10);
    //Print(A);
    A.pop();
    //Print(A);
    A.push(200);
    Print(A);
    cout<<A.empty()<<endl;
    cout<<A.size();
}
