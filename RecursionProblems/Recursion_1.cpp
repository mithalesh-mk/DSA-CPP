/*
1.Print Name 5 times
2.Print linearly from 1 to N
3.Print linearly from N to 1
4.Print linearly from 1 to N(backtracking)
5.Print linearly from N to 1(backtracking)
6.Sum of N numbers(Parameterised Way) 
7.Sum of N numbers(Function Way)
*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Printing Series
void print1(int n){
	if(n == 5)
		return;
	cout<<"DSA Recursion \n";
	n++;
	print1(n);
}

void print2(int n1, int n2){
	if(n1==n2+1)
		return;
	cout<<n1<<" ";
	n1++;
	print2(n1,n2);
}

void print3(int n){
	if(n==0)
		return;
	cout<<n<<" ";
	n--;
	print3(n);
}

void print4(int n1){
	if(n1==0)
		return;
	print4(n1-1);
	cout<<n1<<" ";
}

void print5(int n1, int n2){
	if(n1==n2+1)
		return;
	print5(n1+1, n2);
	cout<<n1<<" ";
}


//Summation of N numbers

void sum1(int s, int n){  //Parameterised Way
	if(n<1){
		cout<<"Summation : "<<s;
		return;
	}
	sum1(s+n,n-1);
}

int sum2(int n){ 	    //Functional Way
	if(n==1){
		return 1;
	}
	return n+sum2(n-1);
}


int main(){
	//print1(0);
	//print2(1,20);
	//print3(19);
	//print4(6);
	//print5(1,18);
	//sum1(0,12);
	//cout<<"Summation : "<<sum2(12);

	return 0;
}