#include<iostream>
using namespace std;

int main()
{
    int A[2][3]={{1,2,3},{4,5,6}};
    for(int j=0;j<3;j++)
    {
        for(int i=1;i>=0;i--)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }


}
