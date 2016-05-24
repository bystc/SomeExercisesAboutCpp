#include <iostream> 

int main(void) 
{ 
std::cout << "Hello World!\n" ; 

//1.4 
int a,b; 

a=12; 
b=3; 

std::cout << "sum of "<< a <<" and "<< b << " is "<<a+b << std::endl; 
std::cout << "product of "<< a <<" and "<< b << " is "<<a*b << std::endl; 

std::cout << "product of "<< a 
<<" and "<< b << " is "<<a*b << std::endl; 

//1.9 
int i,sum=0; 

for(i = -100;i<= 100;++i) 
{ 
sum += i; 
} 

std::cout << "sum of from -100 to 100 is " <<sum << std::endl; 

//1.10 

sum = 0; 

for(i=50;i<=100;i++) 
{ 
sum +=i; 
} 

std::cout << "sum of from 50 to 100 is " <<sum << std::endl; 

sum =0; 
i=50; 

while(i<=100) 
{ 
sum += i; 
i++; 
} 

std::cout << "sum of from 50 to 100 is " <<sum << std::endl; 

//1.11 

i=10; 
while(i>=0) 
{ 
std::cout << i <<" "; 
i--; 
} 
std::cout << std::endl; 

return 0; 
} 
