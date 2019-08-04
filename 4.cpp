#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> maxset(vector<int> &A) {

    vector<int>sums;
    vector<int> ind;
int current_sum=0;
for(int i=0;i<A.size();i++)
{
if(A[i]>=0)
current_sum+=A[i];

else
{sums.push_back(current_sum);
ind.push_back(i-1);
current_sum= 0;
}
}
if(A[A.size()-1]>=0)
{sums.push_back(current_sum);
ind.push_back(A.size()-1);
}
int prev_ind=0;
int ind_new=0;
int max_sum=sums[0];
prev_ind=0;
ind_new=ind[0];
for(int i=1;i<sums.size();i++)
{
    if(sums[i]>=max_sum)
    {max_sum= sums[i];
    prev_ind=ind[i-1]+2;
    ind_new=ind[i];
    }

}
vector<int> C;
for(int i=prev_ind;i<=ind_new;i++)
C.push_back(A[i]);
return C;

}

int main()
{ vector<int> A;
vector<int> B;
int n;
cin>>n;
for(int i=0;i<n;i++)
{ int temp;
cin>>temp;
    A.push_back(temp);
}
B= maxset(A);
for(auto x:B)
    cout<<x;
}


