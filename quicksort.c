//Quick Sort//

#include<stdio.h>
#define SIZE 20
void main()
{
    int a[SIZE],i,n;
    printf("how many number to read:");
    scanf("%d",&n);
    printf("enter the numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("\n sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}
void quicksort(int a[],int lb,int ub)
{
    int pivot, i, j, temp;
    if(lb<ub)
    {
        pivot=a[lb];
        i=lb+1;
        j=ub;
    while(i<j)
    {
        while(i<=ub&&a[i]<=pivot)
        i++;
        while(j>=lb&&a[j]>=pivot)
        j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    a[lb]=a[j];
    a[j]=pivot;
    quicksort(a,lb,j-1);
    quicksort(a,j+1,ub);
    }
}
