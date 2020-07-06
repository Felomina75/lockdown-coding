#include <stdio.h>
void reorder(int A[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] != 0)
			A[k++] = A[i];
	}
	for (int i = k; i < n; i++)
		A[i] = 0;
}
void main()
{
	int A[],n;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  printf("Enter the array elements:\n);
  for(int i=0;i<n;i++)
    scanf("%d",&A[i];
	reorder(A, n);
  for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
}
