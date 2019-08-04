#include<iostream>
using namespace std;

void f(char *array,int a,int b)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
            cout<<*((array+i*b)+j);
    }

}

int main()
{

    char A[2][2]={{'.','S'},{'T','*'}};
    f(&A[0][0],2,2);
    return 0;
}
