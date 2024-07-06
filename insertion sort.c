//insertion sort

#include<stdio.h>
#define SIZE 20
void main()
{
    int a[SIZE], i, n;
    printf("\n how many numbers to read:");
    scanf("%d",&n);
    printf("\n enter numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    inserationsort(a,n);
    printf("\n sorted list");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
}
void inserationsort(int a[], int n)
{
    int i, j, pivot;
    for(i=1;i<n;i++)
    {
        pivot=a[i];
        j=i-1;
        while(j>=0&&a[j]>pivot)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=pivot;
    }
}


