#include<stdio.h>
void main()
{
    int max,i;
    int arr[6]= {12,15,70,6,45,67};
    max= arr[0];
    
    for(i=1; i<6; i++)
    {
        if(arr[i]> max)
        max=arr[i];
    }

    printf("%d",max);
}