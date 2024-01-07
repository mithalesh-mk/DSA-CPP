//Printing all Sub-Sequence of an Array using Recursion

/*
Example : ar[] = {3,1,2}
Sub-Sequences are : 3
					1
					2
					3 1
					3 2
					1 2
					3 2 1
					{} -> Empty
*/

#include<bits/stdc++.h>
using namespace std;

void printV(vector<int>& v){
	for(int i: v){
		cout<<i<<" ";
	}
	cout<<endl;
}


//Recursion Function for printing Sub-Sequence 
void subSequence(int i, vector<int>& arr, vector<int> v){
	if(i>=arr.size()){
		printV(v);
		return;
	}
	v.push_back(arr[i]);
	subSequence(i+1, arr, v);		//Take
	v.pop_back();
	subSequence(i+1, arr, v);		//Not Take
}


int main(){
	int n;
	cout<<"Enter the Number of elements : ";
	cin>>n;
	vector<int> v;
	vector<int> arr(n);
	cout<<"Enter the elements : ";
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<"Sub-Sequences are : "<<endl;
	subSequence(0,arr,v);

	return 0;
}