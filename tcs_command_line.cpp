#include<iostream>
using namespace std;
int main(int argc, char*argv[])
{

int a,b;
int i;
if(argc<2)
{
printf("please use \"prg_name value1 value2 … \"\n");
return -1;
}
for(i=1; i<argc; i++)
{
printf("arg[%2d]: %d\n",i,atoi(argv[i]));
}

return 0;
}
