#include<stdio.h>

int SumOfArray(int arr[], int size, int sum)
{ 
    for(int i=0; i<size; i++)
    {
        sum= sum+ arr[i];
    }
    return sum;
}

int main()
{
    int arr[]= {4,2,7,8,1,2,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    sum=SumOfArray(arr,size,sum);
    printf("Sum Of Array Element Is: %d",sum);

    return 0;
}