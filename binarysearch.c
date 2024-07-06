#include<stdio.h>
#define size 20

void main()
{
    int k,i,n,d,ch,a[size];
    printf("\n how many numbers to read:");
    scanf("%d",&n);
    printf("\n enter the numbers:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    while(ch!=2)
    {
        printf("enter the number to serach:");
        scanf("%d",&d);
        k=binarysearch(a,d,0,n);
        if(k==-1)
            printf("\n value not found");
        else
            printf("\n value found at index:%d",k);
        printf("\n search more?yes(1)/no(2):");
        scanf("%d",&ch);
    }
}
int binarysearch(int a[],int d,int lb,int ub)
{
    int mid;
    if(lb<=ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==d)
            return mid;
        else if(d<a[mid])
            return binarysearch(a,d,lb,mid-1);
        else
            return binarysearch(a,d,mid+1,ub);
    }
    else
        return -1;
}
