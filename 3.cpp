vector<int> Solution::maxset(vector<int> &A) {

    vector<int>sums;
    vector<int> ind;
int current_sum=0;
for(int i=0;i<A.size();i++)
{
if(A[i]>0)
current_sum+=A[i];

else
{sums.push_back(current_sum);
ind.push_back(i-1);
current_sum= 0;
}
inx.push_back(A.size()-1);
int ind_new=0
int max_sum=current_sum[0];
for(int i=0;i<current_sum.size();i++)
{
    if(current_sum[i]>max_sum)
    {max_sum= current_sum[i];
    prev_ind=ind[i-1]+2;
    ind_new=ind[i];
    }

}

for(int i=)
