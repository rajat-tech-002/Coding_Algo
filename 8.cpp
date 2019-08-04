 flip_str(string A,int &L,int &R )
{
    //Kadane's Algorithm
    int n=A.length();
    int sum_1=0;
    int sum_2=0;
    vector<int>temp;
    for(int i=0;i<n;i++)
   {
    temp.push_back(int (A[i]));
   }

for(int i=0;i<n;i++)
{
    if(A[i]=='1')
    {sum_1+=1;
    temp[i]=-1;
    }
}
int l=0;
int r=n-1;
for(int i=0;i<n;i++)
{
    sum_2+=temp[i];
    if(sum_2>sum_1)
    {
        sum_1=sum_2;
    }
    if(sum_2<0)
    sum_2=0;

}

cout<<sum_1;
  //string temp_1;
  //return temp_1;
    return 0;
}

