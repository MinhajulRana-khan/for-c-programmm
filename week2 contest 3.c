#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int a,evensum=0,oddsum=0;
for(int i=1;i<=n;i++)
    {
    scanf("%d",&a);

    if(a%2==0)
    {

         evensum=evensum+a;
    }

    else {

         oddsum=oddsum+a;
    }


    }
printf("%d %d",evensum ,oddsum);
return 0;
}
