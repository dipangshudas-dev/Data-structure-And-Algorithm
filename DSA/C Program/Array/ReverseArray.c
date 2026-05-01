#include<stdio.h>

int ReverseArray(int arr[], int size )
{
    int start= 0;
    int end= size-1;
    int temp;

    while (start < end)
    {
        temp= arr[start];
        arr[start]= arr[end];
        arr[end]= temp;

        start++;
        end--;

    }
}

int main()
{
    int arr[]= {4,2,7,8,1,2,5};
    int size= sizeof(arr)/sizeof(arr[0]);

    ReverseArray( arr, size );

    printf("\nYour reverse Array is: ");

    for(int i=0; i<size; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}