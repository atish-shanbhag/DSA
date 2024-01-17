bool ispossible(vector<int> &boards, int k,int mid)

{
    int paintercount=1,sum=0;
    for(int i=0;i<boards.size();i++)
    {
        if(boards[i]+sum<=mid)
        {
            sum+=boards[i];
        }
     else
        {
            paintercount++;
            if(paintercount>k || boards[i]>mid)
            {
                return false;
            }
            sum=boards[i];
        }
    }
return true;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int ans=-1;
    if(k>boards.size())
    {
        return -1;
    }
    int s=0;
    int end=0;
    for(int i=0;i<boards.size();i++)
    {
        end+=boards[i];
    }
    int mid=s+(end-s)/2;
    while(s<=end)

    {
        if(ispossible(boards,k,mid))
        {
        ans=mid;
        end=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(end-s)/2;
    }
    return ans;

}