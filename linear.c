#include <stdio.h>
int main()
{
    int n, A[10], f=0, i;
    for (i=0; i<10; i++)
    {
        printf("Enter the element in the array:");
        scanf("%d",&A[i]);
    }
    printf("Enter the number to search:");
    scanf("%d",&n);

    for (i=0; i<10; i++)
    {
        if(A[i]==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("Number is found at index %d",i);
    }
    else
    {
        printf("Number is not found");
    }

}