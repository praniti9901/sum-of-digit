#include<stdio.h.>
int sum(int);
void main()
{
	int a,n,p;
	printf("\n enter the  number:");
	scanf("%d",&n);
	p=sum(n);
	printf("\n sum of digit=%d",p);
}
int sum(int n)
{
	int sum=0;
	while(n!=0)
{
	sum=sum+n%10;
	n=n/10;
}
return(sum);

}
