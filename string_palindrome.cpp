// C++ implementation to find
// minimum number of deletions
// to make a string palindromic
#include <bits/stdc++.h>
using namespace std;
int findmax(int a,int b)
{ int temp= a>b?a:b;
return temp;

}
    //longest palindromic subsequence
int lps(string str, int x, int y)
{
    //Base Case
    int n=y-x;
    if(x>y)
        return 0;
    if(x==y)
        return 0;
    if(str[x]==str[y])
        return lps(str,x+1,y-1)+2;

    else return findmax(lps(str,x,y-1),lps(str,x+1,y));

}

int mindel(string str)
{
int n=str.size();
int m=0;
int lp;
if(n%2!=0)
lp=lps(str,0,n-1)+1;
else
    lp=lps(str,0,n-1);
int ans=n-lp;
cout<<"LPS:"<<lp<<endl;
return ans;

}
// Driver Code
int main()
{
	string str = "rajaajark";
	//cout << "Minimum number of deletions = ";
    cout<<"Min Del:"<<mindel(str);
	//cout<<findmax(1,2);
	return 0;
}
