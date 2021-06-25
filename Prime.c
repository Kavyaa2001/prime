#include<stdio.h>
int prime(int n,int i);
int num,i,count=0,n,c;
int main() 
{
    int num,i,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    c=prime(num,num/2);
    if(c==1)
    {
        printf("%d is a prime number.",num);
    }
    else    
    {
        printf("%d is not a prime number.",num);
    }
    return 0;
    
}

int prime(int n,int i)
{
    if(i==1)
    {
        return 1;
    }
    else 
    {
        if(n%i==0)
        {
            return 0;    
        }
        else
            return prime(n,i-1);
    }
}
