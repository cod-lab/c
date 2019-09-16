#include<stdio.h>
#include<stdlib.h>
void main()
{
    /*
    int n;
    char dt[15], x[15];
    void *arr;

    //loop: while(1)
    //{
        printf("enter size and datatype of the array\n");
        scanf("%d%s",&n,&dt);

        printf("\n 1 %s\n",dt);

        if(dt=="integer")
        {
            printf("\n 2 %s",dt);
            strcpy(x,"int");
            printf("\n 3 %s\n",dt);
        }

        else if(dt=="character")
            strcpy(x,"char");
        else if(dt=="float")
            strcpy(x,"float");
        else if(dt=="string")
            strcpy(x,"char[20]");
        else if(dt=="double")
            strcpy(x,"double");
        else
        {
            printf("wrong datatype\n re-enter it\n\n");
            //goto loop;
        }printf("\n 4 %s\n",dt);
    //}
    */

    int i, n, *arr; //=(int *)calloc(n, sizeof(int));

    printf("enter size of array\n");
    scanf("%d",&n);

    arr=(int *)calloc(n, sizeof(int));

    if(arr==" ")
        printf("memory already full");
    else
    {
        printf("enter elements of array\n");
        for(i=0; i<n; i++)
            scanf("%d",&*(arr+i));
        printf("arr is \n");
        for(i=0; i<n; i++)
            printf("%d\n",*(arr+i));
    }
}
