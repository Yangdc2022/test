#include <stdio.h>

void bubbleSort(int arr[], int n) {
   for (int i = 0; i < n - 1; i++) {
       for (int j = 0; j < n - i - 1; j++) {
           if (arr[j] > arr[j + 1]) {
               // 交换两个相邻的元素
               int temp = arr[j];
               arr[j] = arr[j + 1];
               arr[j + 1] = temp;
           }
       }
   }
}

int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr) / sizeof(arr[0]);

   bubbleSort(arr, n);

   printf("排序后的数组: \n");
   for (int i = 0; i < n; i++) {
       printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}