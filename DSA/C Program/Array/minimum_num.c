#include<stdio.h>
void main()
{
    int min,i;
    int arr[6]= {12,15,70,6,45,67};
    min= arr[0];
    
    for(i=1; i<6; i++)
    {
        if(arr[i]< min)
        min=arr[i];
    }

    printf("%d",min);
}