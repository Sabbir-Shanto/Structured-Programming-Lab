#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Enter the Value of n terms : ");
   scanf("%d",&n);
   printf("The first natural numbers of %d are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d ",i);
     sum=sum+i;
   }
   printf("\nThe Sum of natural numbers %d terms : %d \n",n,sum);
   return 0;
}

