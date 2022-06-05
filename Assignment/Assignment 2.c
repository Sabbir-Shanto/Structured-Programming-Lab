#include <stdio.h>
void main()
{       
    int i,n,sum=0;
    float average;
    printf("Enter the 10 numbers : \n");
    for (i=1;i<=10;i++)
  {
     printf("Number-%d :",i);

      scanf("%d",&n);
      sum +=n;
  }
      average=sum/10.0;
      printf("The sum of 10 number is : %d\nThe Average is :    %.2f\n", sum, average);

}

