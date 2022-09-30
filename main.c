#include "stdio.h"


int binarySearch(int arr[],int n,int x)
{
    int low =0,high=n-1;
    while (high >= low) {
        int mid =(high+low)/2;
        if (arr[mid] == x)
            return mid;
       else if (arr[mid] > x) high=mid-1;
        else if (arr[mid] < x) low=mid+1;
    }
    return -1;
}

int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40,90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the num ");
    int x ;
    scanf("%d",&x);
    int index = binarySearch(arr, n , x);
    if(index == -1)
    printf("Element is not in array");
    else printf("Element is at index %d", index);
    return 0;
}