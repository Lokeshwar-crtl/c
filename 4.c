#include<stdio.h>
void main()
{
int i;
int arr[10];
printf("enter the values \n");
for(i=0;i<=9;i++)
{scanf("%d",&arr[i]);}
printf("entered values are : ");
for(i=0;i<=9;i++)
printf("%d, ",arr[i]);
}
