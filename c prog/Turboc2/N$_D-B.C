#include<conio.h>
#include<stdio.h>
main()
{
char ch,s;
int n=0,r,n1;
long int b=0,i=1;
clrscr();
printf("You enter to type character `C' or number `N' : ");
scanf("%c",&s);
clrscr();
if (s=='N')
{
	printf("Enter any number in decimal form : ");
	scanf("%d",&n1);
	n=n1;
}
else if(s=='C')
{
	printf("Enter any character : ");
	scanf("%ch",&ch);
	printf("%d",ch);
}
while (n>0)
{
	r=n%2;
	b=(r*i) +b;
	n=n/2;
	i=i*10;
}
printf("\n\n       The binary form  of this is : %ld ",b);
printf("\n\n\n...........................Made by NiraNjaN ....................");
getch();
}
