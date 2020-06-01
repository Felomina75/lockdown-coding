#include <stdio.h>
void main()
{
    int i,n,arr[100],max[100],j=0;
    scanf(“%d”,&n);
    for(i=0; i<n; i++)
    {
        scanf(“%d”,&arr[i]);
        max[i]=0;
    }
    max[j++] = arr[n-1];
    for(i=n-1; i>=0; i=i-1)
    {
        if( arr[i] >= max[j-1] )
        {
            max[j] = arr[i];
            j++;
        }
     }
    for(j=j-1; j>0; j=j-1)
        printf(“%d\n”,max[j]);
}
