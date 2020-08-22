#include<stdio.h>

int power(int,int);

int main()
{
    int x, n;
    scanf("%d %d",&x,&n);
    printf("%d",power(x,n));
    return 0;
}

int power(int x, int n)
{
    int result;
    if(n==0)
        return 1;
    if(n%2==0)
    {
        //result=power(x,n/2)*power(x,n/2);
        result=power(power(x,n/2),2);
    }
    else
    {
        result=x*power(x,n-1);
    }
    return result;
}
