#include <stdio.h> 
void printKMax(int arr[], int n, int k) 
{ 
    int j, max; 
    for (int i = 0; i <= n - k; i++)
    { 
        max = arr[i]; 
        for (j = 1; j < k; j++) 
        { 
            if (arr[i + j] > max) 
                max = arr[i + j]; 
        } 
        printf("%d ", max); 
    } 
} 
void main() 
{ 
    int arr[], n,k;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements:\n);
    for(int i=0;i<n;i++)
      scanf("%d",&arr[i];
    printf("Enter the value of k:");
    scanf("%d",&k);
    printKMax(arr, n, k); 
}
