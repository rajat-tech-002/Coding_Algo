#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//#include<string.h>
isPalindrome(string A) {
    int n=A.size();
    int i=0;
    int j=n-1;
    while(i<=n/2 && j>=n/2 && i<=j)
    { //cout<<"inside while";
        char c1=A[i];
        char c2=A[j];
        if(isalnum(c1)&&isalnum(c2))
        {  int as1=int(c1);
           int as2=int(c2);
           if(isdigit(c1) && (isdigit(c2)) && c1!=c2)
            return 0;
           if(isdigit(c1) && !isdigit(c2))
           return 0;
           if(isdigit(c2) && !isdigit(c1))
           return 0;
           if(isupper(c1) && isupper(c2) && c1!=c2)
           return 0;
           if(islower(c1) && islower(c2) && c1!=c2)
           return 0;
           if(islower(c1) && isupper(c2) && as1-97 !=as2-65)
           return 0;
           if(isupper(c1) && islower(c2) && as1-65 !=as2-97)
           return 0;
        i++;
        j--;
        }
       if(isalnum(c1)&& !isalnum(c2))
       {
           j--;
       }
       else if(isalnum(c2)&& !isalnum(c1))
       {
           i++;
       }
       else if(!isalnum(c2)&& !isalnum(c1))
       {
           i++;
           j--;
       }






    }
    return 1;
}


int main()
{
    string temp="High";
    char t1='1';
    char t2='A';
    char t3='a';
    cout<<char(toupper(t1))<<endl;
    cout<<char(toupper(t2))<<endl;
    cout<<char(toupper(t3));


}

