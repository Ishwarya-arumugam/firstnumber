#include<stdio.h>
#include<conio.h>
int  main()
{
int i,j,a[100],c;
clrscr();
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
for(j=0;j<c;j++)
{
i=0;
if(a[i]==a[j])
printf("%d",a[i]);
return 0;
}
}
getch();
return 0;
}
