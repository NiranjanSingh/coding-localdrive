#include<stdio.h>
int comp(char s[4])
{
if(s[0]=='C' || s[0] == '?')
{
	if(s[1]=='C' || s[1] == '?')
	{
		if(s[2]=='C' || s[2] == '?')
		{
			if(s[3]=='C' || s[3] == '?')
			return 1;
			else return 0;
		}
		else return 0;
	}
	else return 0;
}
else return 0;
}

int main()
{
int tst,i,l=0;
char s[50],t[4];
scanf("%d",&tst);
while(tst-->0)
{
l=0;
scanf("%s",s);
while(s[l]!='\0')
{
t[0]=s[l];
t[1]=s[l+1];
t[2]=s[l+2];
t[3]=s[l+3];

if(comp(t)) 
{
s[l]='C';
s[l+1]='H';
s[l+2]='E';
s[l+3]='F';
l=l+4;
}
else
{
while(l++<=l+4) 
{
if (s[l]=='?') s[l]='B';
}
l--;
}
}
printf("%s\n",s);
}
}
