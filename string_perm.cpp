#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{

    string temp="Rajat";
    sort(temp.begin(),temp.end());
    do
    {
              cout<<temp<<endl;
          }
          while(next_permutation(temp.begin(),temp.end()));

}
