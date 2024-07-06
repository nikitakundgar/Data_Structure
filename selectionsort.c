//Selection sort

#include<stdio.h>
#define size 10
void main()
{
    int n, i;
    int a[size];
    printf("\n how many elements to read:");
    scanf("%d",&n);
    printf("enter numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    selectionsort(a,n);
    printf("\n sorted list:");
    for(i=0;i<n;i++)
     printf("%4d",a[i]);
}
void selectionsort(int a[], int n)
{
    int i,j, pivotp, temp;
    for(i=0;i<n-1;i++)
    {
        pivotp=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pivotp])
            pivotp=j;
        }
        temp=a[i];
        a[i]=a[pivotp];
        a[pivotp]=temp;
    }
}
