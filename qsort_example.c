#include <stdio.h>
#include <stdlib.h>

// Comparison function
int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
   // If the returned integer <0, a is smaller than b (keep a before b)
   // If = 0, no change needed
   // If > 0, a is greater than b

}

int main() {
   int arr[] = {10, 5, 4, 6, 9};
   int n = sizeof(arr) / sizeof(arr[0]);

   qsort(arr, n, sizeof(int), compare);

   printf("Following is the sorted array: ");
   
   int i;
   for (i = 0; i < n; ++i) {
      printf("%d ", arr[i]);
   }
   printf("\n");
   return 0;
}
