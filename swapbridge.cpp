#include <iostream> 
using namespace std; 
class Swap1
{ 
    int temp, a, b; 
    public:  Swap(int a, int b) 
    { 
        this->a = a; 
        this->b = b; 
    } 
    friend void swap(Swap&); 
}; 
void Swap2(Swap& s1) 
{ 
    cout << "\n Before Swapping: " << s1.a << " " << s1.b; 
    s1.temp = s1.a; 
    s1.a = s1.b; 
    s1.b = s1.temp; 
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b; 
}  
void main() 
{ 
    int a,b;
    cout<<"Enter two numbers:");
    cin>>a>>b;
    Swap1 s(a,b); 
    Swap2(s); 
}
