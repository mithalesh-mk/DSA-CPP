//1. Reverse An Array
//2. Check if a String is Palindrome or not

#include <bits/stdc++.h>

using namespace std;

void printV(vector<int>& v){
	for(int i: v){
		cout<<i<<" ";
	}
}

//Question 1
void reverse_array(vector<int>& ar, int l, int h){
	if(l>h)
		return;
	else{
		swap(ar[l], ar[h]);
		reverse_array(ar, l+1, h-1);
	}
}


//Question 2
bool isPalindrome(string &s, int l, int h){
	if(l>h)
		return true;
	if(s[l]!=s[h]) false;
	return isPalindrome(s,l+1,h-1);
}


int main()
{
	//Question 1 Part
	/*
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	reverse_array(v,0,v.size()-1);
	printV(v);
	*/


	//Question 2 Part

	string s = "MOM";
	if(isPalindrome(s,0,s.length()-1))
		cout<<"Palindrome String ";
	else
		cout<<"Not a Palindrome String ";

	return 0;
}