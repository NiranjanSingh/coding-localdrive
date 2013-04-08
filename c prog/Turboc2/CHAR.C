#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
char *s;
int i,j,k,c;
clrscr();
s=(char *) malloc(10*sizeof(char));
printf("Enter your name :");
scanf("%s",s);
i=0;
c=0;
while(s[i]!='\0')
{
c++;
i++;
}
i=0;
c=c/2;
while(s[i]!='\0')
{
	for(k=0;k<c;k++)
	printf(" ");
	for(j=0;j<=i;j++)
	printf("%c",s[j]);
printf("\n");
i=i+2;
c=c-1;
}

for(j=i;j>=0;j=j-2)
{       for(k=c;k>0;k--)
	printf(" ");
	for(i=0;i<j;i++)
	printf("%c",s[i]);
printf("\n");
c++;
}

getch();
}
