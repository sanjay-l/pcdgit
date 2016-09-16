 #include<stdio.h>
int main()
{
int a,rev=0 ,temp;
printf("enter the number\n");
scanf("%d",&a);
temp=a;
while (temp!=0)
{
rev=rev*10;
rev=(rev+temp%10);
temp=temp/10;
}
printf("reverse of the number is =%d\n",a);
if (a==rev)
printf("%d is a palindrome\n",a);
printf("%d is not a palindrome\n",a);
return 0;
}

