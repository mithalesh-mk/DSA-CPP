//Fibonacci Number Using Recursion 

/* 
Recursion Tree for Fibo(4)
			 
			   f(4)
		      /    \
		     /      \
		   f(3)     f(2)
		   /  \     /   \
 	    f(2) f(1)  f(1) f(0)
 	    /  \
     f(1)  f(0) 

*/

#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacci(n-1) + fibonacci(n-2);
}


int main(){
	int n = 5;
	cout<<"Result for Nth Fibonacci Number : "<<fibonacci(n)<<endl;
	return 0;
}