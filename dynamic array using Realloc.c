//#include<conio.h>
#include<stdlib.h>
int main()
{
    int i, j, n, *arr;

    //calloc()
    printf("enter size of array\n");
    scanf("%d",&n);
    arr=(int *)calloc(n, sizeof(int));

    printf("enter elements of array\n");
    for(i=0; i<n; i++)
        scanf("%d",&*(arr+i));
    printf("array is \n");
    for(i=0; i<n; i++)
        printf("%d\n",*(arr+i));
                                                    //ptr = (struct emp *)malloc(noOfrecords * sizeof(struct emp));
    //realloc()
    printf("enter new size of array\n");
    scanf("%d",&n);
    arr=(void *)realloc(arr, n*sizeof(int));

    // INSERION at the end of array
    printf("enter new element of array\n");
    for(j=i; j<n; j++)
        scanf("%d",&*(arr+j));
    printf("new array is \n");
    for(i=0; i<n; i++)
        printf("%d\n",*(arr+i));
}
