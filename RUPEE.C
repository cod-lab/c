#include<conio.h>
#include<stdio.h>
void main()
{
int n,c=0;
clrscr();
printf("enter a no.");
scanf("%d",&n);
while(n>=2000)
  {
   n=n%2000;
   c=c+1;
   while(n>=500 && n<2000)
     {
      n=n%500;
      c=c+1;
      while(n>=200 && n<500)
	{
	 n=n%200;
	 c=c+1;
	 while(n>=100 && n<200)
	   {
	    n=n%100;
	    c=c+1;
	    while(n>=50 && n<100)
	      {
	       n=n%50;
	       c=c+1;
	       while(n>=20 && n<50)
		 {
		  n=n%20;
		  c=c+1;
		  while(n>=10 && n<20)
		    {
		     n=n%10;
		     c=c+1;
		     while(n>=5 && n<10)
		       {
			n=n%5;
			c=c+1;
			while(n>=2 && n<5)
			  {
			   n=n%2;
			   c=c+1;
			   while(n==1)
			     {
			      n=n%1;
			      c=c+1;
			     }
			  }
		       }
		    }
		 }
	      }
	   }
	}
     }
  } printf("%d",&c); getch();
}







