#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    printf("Enter any number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}