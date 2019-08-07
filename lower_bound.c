#include<stdio.h>

int main()
{                                 //lower bound
   int a[6]={1,1,2,2,2,4};
   int num,mid;
   num=2;
   int ans=-1;

   int s=0,e=5;

   while(s<=e)
   {
       mid=(s+e)/2;
       if(a[mid] == num)
       {
           e=mid-1;
           ans=mid;
        }
        else if(a[mid]<num)
        {
            s=mid+1;
        }
        else if(a[mid]>num)
            e=mid-1;


    }
    printf("%d",ans);
}
