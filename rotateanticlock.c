#include <stdio.h>
void reverse_column(int arr[N][N])
{
 int k;
 for (int i = 0; i < N; i++)
 {
   k = N-1;
   for (int j = 0; j < k; j++)
  {
      swap(arr[j][i], arr[k][i]);
       k--;
  }
 } 
}
void transpose(int arr[N][N])
{
 for (int i = 0; i < N; i++)
 for (int j = i; j < N; j++)
 swap(arr[i][j], arr[j][i]);
}
void print_matrix(int mat[N][N])
{
     for (int i = 0; i < N; i++)
     {
          for (int j = 0; j < N; j++)
             printf("%d\t", mat[i][j]);

          printf("\n");
    }
    printf("\n");
}
void main()
{
 int mat[][],N;
  printf("Enter the number of elements:");
  scanf("%d",&N);
  printf("Enter the array elements:\n);
  for(int i=0;i<n;i++)
    scanf("%d",&mat[i];
 printf("The matrix before rotation\n");
 print_matrix(mat);
 transpose(mat);
 printf("The matrix after rotation - anticlockwise\n");
 reverse_column(mat);
 print_matrix(mat);
}
