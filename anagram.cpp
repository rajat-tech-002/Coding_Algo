#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct anagram{

string str1;
string str2;
bool found;

};

anagram f(anagram temp)
{
    string s1=temp.str1;
    string s2=temp.str2;

    int a=0;
    int b=0;

    map<char,int> M1;
    map<char,int> M2;

    while(s1[a]!='\0')
    {
        M1[s1[a]]++;
        a++;
    }

    while(s2[b]!='\0')
    {
        M2[s2[b]]++;
        b++;
    }

    if(M1.size()!=M2.size())
        {temp.found=false;
        return temp;}

    map<char,int>::iterator itr1;
    map<char,int>::iterator itr2;

    for(itr1=M1.begin(),itr2=M2.begin();itr1!=M1.end(),itr2!=M2.end();itr1++,itr2++)
    {
        if(itr1->first!=itr2->first || itr1->second!=itr2->second)
        {
             temp.found=false;
             return temp;
        }

    }
    temp.found=true;
    return temp;
}

int main()

{
anagram temp;
temp.str1="silent";
temp.str2="listen";

anagram ana_result=f(temp);
cout<<ana_result.found;

}
