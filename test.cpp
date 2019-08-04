#include<iostream>
using namespace std;

int f(int a,int b)
{
    return a+b;
}
int filter(int b,int c, int(*f)(int,int))
{
    return f(b,c);

}
int main()
{
    cout<<filter(1,20,f);
}
