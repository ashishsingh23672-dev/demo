#include<stdio.h>
int main()
{
    int n;
    int rem;
    int rev =0;
    printf("enter a number");
    scanf("%d",&n);
    while(n>)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
printf("%d\n",rev);
return 0;
}
