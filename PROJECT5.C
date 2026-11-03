#include<stdio.h>
int main()
{
FILE *fp;
char ch;
fp=fopen("data.txt","w");
if(fp==NULL)
{
printf("Error");
return 0;
}
fprintf(fp,"\n-----BENIFITES OF C PROGRAM-----\n1.Easy To Learn\n2.Fast Execution\n3.Foundation For Other Languages\n4.Portable Language\n5.Carrer Oppertunities\n");
fclose(fp);
fp=NULL;
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("Error");
return 0;
}
while ((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
fp=NULL;
fp=fopen("data.txt","a");
if(fp==NULL)
{
printf("Error");
return 0;
}
fprintf(fp,"\n---Character Of C Trainer---\n1.Good Character\n2.Better Teaching\n3.Very Kindly\n");
fclose(fp);
fp=NULL;
return 0;
}
