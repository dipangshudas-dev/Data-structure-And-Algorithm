#include<stdio.h>

int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        return i; //FOUND
    }
    return -1; //NOT FOUND
}


int main()
{
    int arr[]= {4,2,7,8,1,2,5};
    int size= 7;
    int target= 8;

    printf("%d\n", LinearSearch(arr,size,target));
    return 0;
}