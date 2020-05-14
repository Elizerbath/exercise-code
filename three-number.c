#include<stdio.h>

/*
方法一：
int mul(int n)
    {
        int i,count=1;
        for(i=1;i<=n;i++)
        {
         count=i*count;
        }
        return count;
    }
*/

//方法二：递推方法计算;

int mul(int n)
    {
        if(n<=1)
            return 1;
        return n*mul(n-1);
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
        return 0;
    }

