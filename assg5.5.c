#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n",2*n-(2*i-1));

    }
    
    return 0;
}
