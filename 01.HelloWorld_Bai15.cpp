#include <bits/stdc++.h>

using namespace std;
string printFibonacci(int n){
	if (n==0){
		return "a";
	}
	if (n==1){
		return "b";
	}
	return printFibonacci(n-1)+printFibonacci(n-2);
}

int main(){
	int n=10;
	cout << printFibonacci(n) << endl;
}
