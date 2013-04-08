#include<stdio.h>
main()
{
FILE *fs,*ft;
char ch,s[12],*t[12];
printf("Enter source file name which you want to copy");
scanf("%s",s);
printf("\nEnter target file name");
scanf("%s",t);
fs = fopen(s,"r");
if (fs==NULL)
{
puts("Cannot open file");
exit();
}
ft = fopen(t,"w");
if (ft==NULL)
{
puts("Cannot open target file");
fclose(fs);
exit();
}
while((ch=fgetc(fs))!=EOF)
fputc(ch,ft);
fclose(fs);
fclose(ft);
}


