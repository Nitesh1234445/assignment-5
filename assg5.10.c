#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for ( i = 1; i <=n ; i++)
    {
       printf(" %d * %d = %d\n",n,i,n*i);

    }
    
    return 0;
}
