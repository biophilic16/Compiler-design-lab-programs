#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
main()
{
FILE *fp;
char a[5]={':','-','*','+','='};
char b[8]={'{','}','[',']','(',')'};
char q[20]={'a','b','c','d'};
char p[15][15]={"int","if","void"}; int i,j,k,n,l;
char x,ch,y[7],s[10],z[8],ch1[80],id[60]; printf("********\n Choices are: \n*********"); printf("\n 1. Operators");
printf("\n 2. Special Symbols"); printf("\n 3. Keywords");
printf("\n 4. Identifiers");
printf("\n 5. Exit"); first:;
printf("\n Enter your choice:"); scanf("%d",&n);
switch(n)
{
case 1:
printf("\n 1. Operators");
 

for(i=0;i<strlen(a);i++)
{
fp=fopen("input.c","r"); do
{ch=fgetc(fp); if(ch==a[i])
{
printf("\n%c\n",ch); break;
}
}
while(!feof(fp));
}
fclose(fp); goto first; case 2:
printf("\n 2. Special Symbols"); for(j=0;j<strlen(b);j++)
{
fp=fopen("input.c","r"); do
{	x=fgetc(fp);
if(x==b[j])
{
printf("\n%c\n",b[j]); break;
}
}while(x!=EOF);
}
fclose(fp); goto first; break; case 3:
printf("\n 3. Keywords"); fp=fopen("input.c","r"); l=0;
x=getc(fp); while(x!=EOF&&x!='(')
{
id[l]=x; l++;
x=getc(fp);
 

}
id[l]='\0'; fclose(fp); printf("\n%s\n",id); goto first;
break; case 4:
printf("\n 4. Identifiers"); for(i=0;i<strlen(q);i++)
{
fp=fopen("text1.c","r"); do
{
ch=fgetc(fp); if(ch==q[i])
{
printf(	"\n%c\n",ch); break;
}
}
while(!feof(fp));
}
fclose(fp); goto first; break; case 5:
printf("5. You Want To Quit Give Y:"); scanf("\n%c\n",&y);
if(getchar()=='y') exit(0);
else goto first; break;
}
}
