//1. Reverse An Array
//2. Check if a String is Palindrome or not

#include <bits/stdc++.h>

using namespace std;

void printV(vector<int>& v){
	for(int i: v){
		cout<<i<<" ";
	}
}

void reverse_array(vector<int>& ar, int l, int h){
	if(l>h)
		return;
	else{
		swap(ar[l], ar[h]);
		reverse_array(ar, l+1, h-1);
	}
}



int main()
{
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	reverse_array(v,0,v.size()-1);
	printV(v);

	return 0;
}