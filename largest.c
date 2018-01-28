#include<stdio.h>
void main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2)
    {
        if(n1>n3)
            printf("%d",n1);
        else
            printf("%d",n3);

    }
    else{
        if(n3>n2)
            printf("%d",n3);
        else
            printf("%d",n2);
    }
}
