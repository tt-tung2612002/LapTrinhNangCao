#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	int temp =-1;
	while (cin>>n && n>=0){
		if (temp != n){
			temp =n;
			cout << temp << " ";
		}
	}
	cout << n;		
}













