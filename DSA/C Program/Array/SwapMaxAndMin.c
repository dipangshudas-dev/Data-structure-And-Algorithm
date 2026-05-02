#include<stdio.h>

int MaximumNum(int arr[], int size)
{
    int max=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]> max)
        {
            max=arr[i];
        }

    }
    return max;

}

int MinimumNum(int arr[], int size)
{
    int min= arr[0];
    for(int i=1; i<size; i++)
    {
        if (arr[i] <min)
        {
            min= arr[i];
        }
    }
    return min;
}

int main()
{
    int arr[]= {12,15,70,6,45,67};
    int size= sizeof(arr)/sizeof(arr[0]);
    int max= MaximumNum( arr, size);
    int min= MinimumNum( arr,  size);

    printf("Before\n Max: %d, Min: %d\n",max,min);

    //swap max and min
    int temp;
    temp= max;
    max= min;
    min= temp;

    printf("After\n Max: %d, Min: %d",max,min);

    return 0;

}