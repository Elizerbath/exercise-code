#include<stdio.h>

/*
判断一个数是不是素数；
输出100以内的素数；
将一个偶数分解为两个素数之和；
*/

//判断一个数是不是素数；
int isprime(int n)
    {
    int i;
    for(i=2;i<=n/2;i++)
        /*为什么用n/2*/
        if(n%i==0)
        return 0;
        return 1;
    }

//输出100以内的素数；
int main()
    {
    int num;
    for(num=2;num<=100;num++)
    {
        if(isprime(num))
        printf("%d ",num);
    }
    printf("\n");
    }


/*  
//方法一：将一个偶数分解为两个素数；
int main()
    {
    int i,num;

    scanf("%d",&num);

    for(i=2;i<=num/2;i++)
    {
        if(isprime(i)&&isprime(num-i))
        printf("%d=%d+%d\n",num,i,num-i);
    }
    }
*/


/*  
//方法二：将一个偶数分解为两个素数；
int main()
    {
    int count,isprimeone,isprimetwo;

    printf("输入一个偶数\n");

    scanf("%d",&count);

    if(count%2==0)
    {

        for(isprimeone=2;isprimeone<=count/2;isprimeone++)
        {

            if (isprime(isprimeone)==1)
            {
                isprimetwo=count-isprimeone;
                if(isprime(isprimetwo)==1)
                printf("%d分解为两个素数是%d,%d\n",count,isprimeone,isprimetwo);
            }
        }
    }

    }
*/