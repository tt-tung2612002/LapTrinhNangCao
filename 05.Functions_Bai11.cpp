#include<bits/stdc++.h>
using namespace std;
string toBinary(int n){
	string s;
	while (n != 0){
		int x;
		x = n%2;
		n = n/2;
		s += (char)x+48;
	}
	return {s.rbegin(),s.rend()};
}
int main(){
   int n;
	cin >> n;
	cout<< toBinary(n);
   system("pause");
}