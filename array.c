#include<stdio.h>
void main()
{
    int n,sum=0,k,arr[100],i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        arr[i]=i+1;
    for(i=0;i<k;i++)
        sum=sum+arr[i];
    printf("%d",sum);
}
