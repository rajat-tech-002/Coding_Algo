#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    unordered_map<string ,int> M;
    vector<string> S;
    int n;
    cin>>n;
    while(n--)
    {
        string temp;
        cin>>temp;
        if(M.find(temp)!=M.end())
        { string str=temp;
            str+=to_string(M[temp]);
            S.push_back(str);
            M[temp]++;
        }
        else
        {
            S.push_back(temp);
            M[temp]++;


        }

    }
    unordered_map<string,int> :: iterator itr;
    /*for(itr=M.begin();itr!=M.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }*/
    for(int i=0;i<S.size();i++)
    {
        cout<<S[i]<<endl;
    }


}

