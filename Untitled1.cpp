#include<stdio.h>
int main()
{
int x,y,a1,a2,a3,a4,z,sum;
printf("Enter the number: ");
scanf("%d",&x);
y=x%10;
a1=y;
y=x/10;
a2=y%10;
a3=((y/10)%10);
z=y/10;
a4=z/10;
sum=a1+a2+a3+a4;
printf("sum=%d",sum);
return 0;
}
