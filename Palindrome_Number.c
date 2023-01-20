#include<stdio.h>
int main()
{
int n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    int a,sum=0,rev,temp;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        rev=a%10;
        sum=sum*10+rev;
        a=a/10;
    }
if(sum==temp)
{
    printf("True
");
}
else
{
    printf("False
");
}
}
}