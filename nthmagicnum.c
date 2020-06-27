#include <stdio.h> 
#include<iostream.h>
int nthMagicNo(int n) 
{ 
    int pow = 1, answer = 0; 
    while (n) 
    { 
       pow = pow*5;  
       if (n & 1) 
         answer += pow; 
       n = n/2;
    } 
    return answer; 
}  
void main() 
{ 
    int n ;
    printf("Enter the  number:");
    scanf("%d",&n);
    printf("The %d th magic number is %d",n,nthMagicNo(n));
} 
