#include <bits/stdc++.h>

using namespace std;
int calcSalary(int workHour){
	int overTime;
	int salary = 0;
	if (workHour>100){
		overTime = workHour - 100;
		salary = 12000*100;
	}
	for (int i=1;i<=overTime;i++){
		if (i<=50){
			salary = salary + 16000;
		}
		else if (i>50 && i<=100){
			salary = salary + 20000;
		}
		else{
			salary = salary + 25000;
		}
	}	
	return salary;
}
int main() {
	// luong cua thang 
	int workHour;
	cin >> workHour;
	int salary = calcSalary(workHour);
	cout << salary << endl;
}
