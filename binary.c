#include <stdio.h>
int main()
{
    int n,beg,end,mid,A[10];
    
    for (int i=0; i<10; i++)
    {
        printf("Enter the number in the array:");
        scanf("%d",&A[i]);
    }
    printf("Enter the number to search:");
    scanf("%d",&n);

    beg=0;
    end=9;
    while(beg<=end)
    {
        mid = beg+(end-beg)/2;
        if(A[mid]==n)
        {
            printf("Number is found at index %d",mid);
            return 0;
        }
        else if(A[mid]<n)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    printf("Number not found");
    return 0;
}