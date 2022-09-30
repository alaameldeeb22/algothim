#include <stdio.h>
int BinarySearch(int arr[], int low, int high, int element){
   if (high >= low){
      int middle =  (high + low)/2;
      if (arr[middle] == element)
         return middle;
      if (arr[middle] > element)
         return BinarySearch(arr, low, middle-1, element);
      return BinarySearch(arr, middle+1, high, element);
   }
   return -1;
}
int main(void){
   int arr[] = {1, 4, 7, 9, 16, 56, 70};
   int n = sizeof(arr) / sizeof(arr[0]);
    printf("enter the num ");
    int x ;
    scanf("%d",&x);
   int found_index = BinarySearch(arr, 0, n-1, x);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}