#include<stdio.h>
int main()
{
    int i ;
    int size;
    int search;
    int a[100];
    int low;
    int high;
    int mid;

    printf("\nEnter size : ");
    scanf("%d",&size);
    printf("\nEnter %d elements ",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements are : ");
    for(i=0;i<size;i++)
    {
        printf(" %d,",a[i]);
    }
    printf("\nEnter the search element : ");
    scanf("%d",&search);
    
    low=0;
    high=size-1;
  while(low<=high)
  {
    mid=(high+low)/2;
    if(a[mid]==search)
   { printf("Element %d found at %d middle index",search,mid);
    break;
  } 
  
    else if (search>a[mid])
   {
    low=mid+1;
   }
   else
   {
    high=mid-1;
   }
}
if (low>high)
printf("Element %d not found",search);
}  