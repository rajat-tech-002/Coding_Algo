#include<iostream>
using namespace std;
int main()

{

int n; //user will enter d no.

float temp,sqt;



cin>>n;

sqt=n/2;

temp=0;

while(sqt!=temp)

{

temp=sqt;

sqt=(n/temp+temp)/2;
cout<<"Temp:"<<temp<<" "<<"SQT:"<<sqt<<endl;
}

cout<<sqt;

}
