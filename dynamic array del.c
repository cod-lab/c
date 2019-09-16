#include<stdlib.h>
#include<stdio.h>
int main()
{
    int opt, *arr, n, m, i, j, start, end=n-1, x;

    // calloc()
    printf("enter size of array\n");
    scanf("%d",&n);

    arr=(int *)calloc(n, sizeof(int));

    printf("enter elements of array\n");
    for(i=0; i<n; i++)
        scanf("%d",&*(arr+i));
    printf("array is \n");
    for(i=0; i<n; i++)
        printf("%d\t",*(arr+i));

    while(1)
    {
        printf("\nenter the position from where you want to delete element(s) of array\n");
        scanf("%d",&start);
        printf("enter the position till where you want to delete element(s) of array\n");
        scanf("%d",&end);

        if((end==0) && (start==0))
        {
            m=n;
            break;
        }

        if((start>end) || (end>n-1))
            printf("ending position should be greater than starting position and one less than the size of array, reenter the appropriate positions\n",n);
        else
        {
            // SHIFTING old element(s) of array
            for(i=0; i<end-start+1; i++)
                for(j=start; j<=n; j++)
                    arr[j]=arr[j+1];

            printf("\nnew array1(after shifting old element(s)) is \n");
            for(i=0; i<n; i++)
                printf("%d\t",*(arr+i));

            n=n-(end-start+1);
            break;
        }
    }
    printf("\nnew value of n = %d\n",n);

    if(m==n)
    {
        printf("\nsize of array(after reallocation) is %d\n",sizeof(arr));
        printf("no. of element(s) in array(after reallocation) is %d\n",x = sizeof(arr)/sizeof(arr[0]));

        printf("\nnew array2(after deleting & shifting old element(s)) is \n");
        for(i=0; i<n; i++)
            printf("%d\t",*(arr+i));

        free(arr);
        return(0);
    }
    else
    {   // realloc()                                               // malloc: ptr = (struct emp *)malloc(noOfrecords * sizeof(struct emp));
        arr=(void *)realloc(arr, n*sizeof(int));

        printf("\nsize of array(after reallocation) is %d\n",sizeof(arr));
        printf("no. of element(s) in array(after reallocation) is %d\n",x = sizeof(arr)/sizeof(arr[0]));

        printf("\nnew array3(after deleting & shifting old element(s)) is \n");
        for(i=0; i<n; i++)
            printf("%d\t",*(arr+i));

        free(arr);
        return(0);
    }
}

