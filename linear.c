#include<stdio.h>
int main()
{
    int i;
    int a[100];
    int size;
    int search;
    int flag;

    printf("\nEnter size: ");
    scanf("%d",&size);
    printf("\nEnter %d elements of array : ",size);
    for(i=0;i<size;i++)
    { 
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array are : ");
    for(i=0;i<size;i++)
    {
        printf(" %d ,",a[i]);
    }
    printf("\nEnter search element : ");
    scanf("%d",&search);
    for(i=0;i<size;i++)
    {
        if(a[i]==search)
        {
            printf("\nElement %d found at %d index location",search,i);
            flag=1;
            break;

        }
    }    
        if(flag==0)
        printf("\nElement %d not found",search);
    
    
    return 0;
}    

    

