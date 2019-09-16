#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void multiplication(int a, int b, int e, int f, int r, int c, int k, int sum, int first[10][10], int second[10][10], int multiply[10][10])
{
    printf("\n");
    for(r=0; r<a; r++)
    {
        for(c=0; c<f; c++)
        {
            for(k=0; k<e; k++)
            {
                sum = sum + first[r][k] * second[k][c];
            }
            multiply[r][c]=sum;
            sum=0;
        }
    }
       //show matrix
    printf("product of two matrices is\n");

    for(r=0; r<a; r++)
        for(c=0; c<f; c++)
        {
            printf("%d\t",multiply[r][c]);
        }
        printf("\n");
}

int main()
{
    int a, b, e, f, r, c, k, sum=0;
    int first[10][10], second[10][10], multiply[10][10];

    while(1)
    {
        printf("enter no. of rows and columns of first matrix\n");
        scanf("%d%d",&a,&b);

        printf("enter no. of rows and column of second matrix\n");
        scanf("%d%d",&e,&f);

        if(b!=e)
            printf("the size of second matrix is not valid for matrix multiplication.\nPlease enter valid size\n\n");
        else
        {
            printf("enter the elements of first matrix\n");

            for(r=0; r<a; r++)
                for(c=0; c<b; c++)
                    scanf("%d",&first[r][c]);

            printf("enter the elements of second matrix\n");

            for(r=0; r<e; r++)
                for(c=0; c<f; c++)
                    scanf("%d",&second[r][c]);

            multiplication(a,b,e,f,r,c,k,sum,first,second,multiply);
            break;
        }
    }
}
