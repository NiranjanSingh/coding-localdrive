#include<stdio.h>
main(int argc,char *argv[])
{
FILE *fs,*ft;
char ch;
if (argc != 3)
{
	puts("Insufficient arguments");
	exit();
}
fs=fopen(argv[1],"r");
if (fs==NULL)
{
	puts("cannot open file");
	exit();
}
ft =fopen(argv[2],"w");
if (ft==NULL)
{
	puts("Cannot open file");
	fclose(fs);
	exit();
}
while((ch=fgetc(fs))!=EOF)
fputc(ch,ft);
fclose(fs);
fclose(ft);
}

