#include <bits/stdc++.h>

using namespace std;
double calcMoneyToPay(int loan){
	double temp = loan*pow(1+0.02,12);
	cout << fixed << setprecision(0);
	return temp;
}
	
int main() {
	int loan;
	cin >> loan;
	cout << calcMoneyToPay(loan);
}
