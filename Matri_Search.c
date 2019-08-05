//        https://www.interviewbit.com/problems/matrix-search/


 
int searchMatrix(int** A, int n11, int n12, int B) 
{
    int i=0,mid=0,s=0,e=0,row=-1;
   for(i=0;i<n11;i++)
   {
       if(B>=A[i][0] && B<=A[i][n12-1])
        {
            row=i;
            break;
        }
   }
 //  printf("%d ",row);
   if(row==-1) return 0;
      s=0;
      e=n12-1;
   //   if((s+e)==0) return 0;
           while(s<=e)
           {
              
               mid=(s+e)/2;
              if(A[row][mid]==B)
                 return 1;
              if(A[row][mid]<B)
                 s=mid+1;
              else
                e=mid-1;
           }
    
    
    return 0;
}
