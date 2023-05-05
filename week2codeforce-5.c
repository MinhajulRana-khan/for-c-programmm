#include<stdio.h>

int main()
{
  char x;
  scanf("%c",&x);

   if((x >= 'a' && x<= 'z')||(x >= 'A' && x<= 'Z'))
   {    printf("ALPHA\n");
       if(x >= 'a' && x<= 'z')
       {
           printf("IS SMALL\n");
       }
       else if(x >= 'A' && x<= 'Z') {
        printf("IS CAPITAL\n");
       }
   }
   else if(x >= '0' && x<= '9')
  {
      printf("IS DIGIT\n");
  }

return 0;

}
