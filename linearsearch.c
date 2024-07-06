#include<stdio.h>
#define size 20
void main()
{
    int i,a[size],ch=0,d,k,n;
    printf("\n how many elements to read:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter numbers:");
        scanf("%4d",&a[i]);
    }
    while(ch!=2)
    {
        printf("\n enter data to search:");
        scanf("%d",&d);
        k=linearsearch(a,n,d);
        if(k==-1)
            printf("\n data not found");
        else
            printf("\n data found at index:%d",k);
        printf("\n search more?yes(1)/no(2):");
        scanf("%d",&ch);
    }
}
int linearsearch(int a[],int n,int d)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        {
            return i;
        }
    }
    return -1;
}
