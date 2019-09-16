#include<stdio.h>
#include<stdlib.h>

struct emp
{
    int id;
    char name[5];
    float sal;
};

void main()
{
    struct emp *ptr;
    int i, n;
    printf("enter no. of records\n");
    scanf("%d",&n);

    ptr = (struct emp *)malloc(n * sizeof(struct emp));
    if(ptr==" ")
        printf("out of memory\n");
    else
    {
        printf("size of struct emp is %d\n",sizeof(struct emp));
        printf("size of ptr is %d\n",sizeof(ptr));
        printf("ptr current value is %d\t%s\t%f\n\n",ptr->id,ptr->name,ptr->sal);

        for(i=0; i<n; i++)
        {
            printf("enter employee details\n");
            scanf("%d%s%f",&(ptr+i)->id,(ptr+i)->name,&(ptr+i)->sal);
        }

        for(i=0; i<n; i++)
            printf("emp details are\n %d\t%s\t%f\n",(ptr+i)->id,(ptr+i)->name,(ptr+i)->sal);
    }
}
