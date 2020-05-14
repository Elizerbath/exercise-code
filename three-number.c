#include<stdio.h>

int mul(int n)
    {
        int i,count=1;
        for(i=1;i<=n;i++)
        {
         count=i*count;
        }
        return count;
    }


int main()
    {
        int i,n,j;
        int num;
        for(i=1;i<=9;i++)
        {
            for(n=0;n<=9;n++)
            {
                for(j=0;j<=9;j++)
                {
                   num=i*100+n*10+j;
                   if(num==mul(i)+mul(n)+mul(j))
                   {
                       printf("%d ",num);
                   } 
                }
            }
        }
        printf("\n");
    }