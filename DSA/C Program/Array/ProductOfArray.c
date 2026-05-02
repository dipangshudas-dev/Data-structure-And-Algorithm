#include<stdio.h>

int ProductOfArray(int arr[], int size, int product)
{ 
    for(int i=0; i<size; i++)
    {
       product*= arr[i];
    }
    return product;
}

int main()
{
    int arr[]= {4,2,7,8,1,2,5};
    int size= sizeof(arr)/sizeof(arr[0]);
    int product= 1;

    product=ProductOfArray(arr,size,product);
    printf("Producr Of Array Element Is: %d",product);

    return 0;
}