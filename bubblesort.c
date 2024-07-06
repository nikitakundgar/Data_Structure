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
    bubblesort(a,n);
    printf("\n sorted list");
    for(i=0;i<n;i++)
        printf("%4d",a[i]);
}
void bubblesort(int a[], int n)
{
    int i, j, temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
   }
}
