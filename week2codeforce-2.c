#include<stdio.h>
int main()
{
  int A,B;
  scanf("%d%d",&A,&B);
  if(A%B==0)
    {
    printf("Multiplies|\n");
    }
   else if(B%A==0)

   {
       printf("Multiplies|\n");
   }

  else{

    printf("No Multiplies\n");
  }

   return 0;

}
