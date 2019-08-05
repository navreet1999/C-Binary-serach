int func(int *A,int n,int mid)
{
    int sum=0,count=1,i;
    for(i=0;i<n;i++)
    {
        if(sum+A[i]>mid)
        {
            count++;
            sum=A[i];
        }
        else
          sum+=A[i];
    }
    return count;
}
int books(int* A, int n1, int B) 
{
    int i,sum=0l,max=INT_MIN;
    
    for(i=0;i<n1;i++)
    {
        if(A[i]>max)
        max=A[i];
        
        sum=sum+A[i];
    }
    
    int l=max,h=sum;
    if(B==1)
     return sum;
    if(n1<B)
     return -1;
    
    while(l<h)
    {
        int mid=(l+h)/2;
        int s=func(A,n1,mid);
        if(s<=B)
          h=mid;
        else
         l=mid+1;
        
    }
    return l;
}