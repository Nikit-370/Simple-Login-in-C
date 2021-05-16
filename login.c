#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
char studentID[30], passwd[10];
char id[30], pd[10];
int n=1;
int i,x,y;
clrscr();

printf("\nPlease enter Name < 30 and Password < 10.\n");
printf("--------------------------------------------------------");
printf("\nEnter you Name:\n");
scanf("%s",&studentID);
printf("\nEnter your Password:\n");
scanf("%s",&passwd);

printf("\nCredentials saved sucessfully\n");

for(i=0;i<3;i++)
{
printf("********************************************************");
printf("\nEnter StudentID\n");
scanf("%s",&id);
printf("\nEnter password\n");
scanf("%s",&pd);
printf("********************************************************\n");

x=strcmp(id,studentID);
y=strcmp(pd,passwd);

if(x==0&&y==0)
{
printf("\nLogin Sucessful!! Welcome %s",studentID);
getch();
break;
}
else
{
printf("\nTry again!! Only %d tries left.",3-n);
n++;
}
if(n>=0)
{
printf("\nAccess Denied!!\n");
getch();
}
}
}
getch();
