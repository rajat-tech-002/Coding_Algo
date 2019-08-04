#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void swap_num(int* a,int* b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=2;
    int b=3;
    swap_num(&a,&b);
    cout<<a<<" "<<b;

}
