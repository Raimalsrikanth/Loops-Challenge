#include<stdio.h>
#include<conio.h>
main()
{
int n,i,j;
clrscr();
Printf("Enter n:");
Scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
Printf("%d",i);
Printf("\n");
}
getch();
return 0;
}
