#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin >> n;
	int sign =0;
	for (int i=0;i<n;i++){
		for (int j=0;j<2*n;j++){
			if ( j != n-sign-1){
				cout << " ";
			}
			else{
				for (int k=0;k<2*i+1;k++){
					cout << "*";
				}
			}
		
		}
		sign++;
		cout << endl;
	}
	system("pause");
}













