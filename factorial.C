#include<conio.h>
#include<stdio.h>

int main(void)
{
int i, n, f=1;
printf("enter a no.\n");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
f=f*i;
}
printf("%d",n);
getch();
}


