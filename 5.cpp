#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int>spiralOrder(const vector<vector<int> > &A) {

int m= A.size();
int n=A[0].size();
int T=0;
int L=0;
int B=m-1;
int R=n-1;
int dir=0;
vector<int> C;
while(T<=B && L<=R)
{
    if(dir==0)
    { for(int i=L;i<=R;i++)
        C.push_back(A[T][i]);
        T++;
        dir=1;
    }
     if(dir==1)
    { for(int i=T;i<=B;i++)
         C.push_back(A[i][R]);
        R--;
        dir=2;
    }
     if(dir==2)
    { for(int i=R;i>=L;i--)
         C.push_back(A[B][i]);
        B--;
        dir=3;
    }
     if(dir==3)
    { for(int i=B;i>=T;i--)
         C.push_back(A[i][L]);
        L++;
        dir=0;
    }

}
return C;
}
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>A;
    for(int i=0;i<m;i++)
    { cout<<"Outer loop\n";
     vector<int>temp;
     for(int j=0;j<n;j++)
     { cout<<"inner loop\n";
      int t;
      cin>>t;
     temp.push_back(t);
     }
     A.push_back(temp);
    }
    vector<int> B;
    B=spiralOrder(A);
    for (auto x:B)
        cout<<x<<" ";
}
