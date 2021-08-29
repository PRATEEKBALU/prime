#include<stdio.h>
int primecheck(int n,int i)
{
    int count;
    if(i==1)
    {
        return 1;
    }
    else
    {
        if(n%i==0)
        {
            count=1;
        }
        else
        {
            return primecheck(n,i-1);
        }
    }
}
int main()
{
    int n;
    int check;
    printf("Enter a number :");
    scanf("%d",&n);
    check = primecheck(n,n/2);
    if(check == 0)
    {
        printf("%d It is not a prime number\n",n);
    }
    else
    {
        printf("%d It is a prime number\n",n);
    }
    return 0;

}
