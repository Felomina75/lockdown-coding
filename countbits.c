#include <stdio.h> 
unsigned int countSet(unsigned int x) 
{ 
    if (x <= 0) 
        return 0; 
    return (x % 2 == 0 ? 0 : 1) + countSet(x / 2); 
} 
unsigned int count(unsigned int n) 
{ 
    int bitCount = 0; 
    for (int i = 1; i <= n; i++) 
        bitCount += countSet(i); 
  
    return bitCount; 
} 
void main() 
{ 
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Total set bit count is %d", count(n)); 
    return 0; 
} 
