#include<stdio.h>
int main()
{
    int fact,i,j,a,b;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d
",i);
        }
    }
    return 0;
}