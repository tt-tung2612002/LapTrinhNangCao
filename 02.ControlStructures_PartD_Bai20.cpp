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
int calcTax(int salary){
	double insurance = salary*0.09;
	salary = salary - insurance;
	double taxToPay=0;
	int tax =0;
	if (salary > 1000000){
		tax = salary-1000000;
	}
	if (tax < 500000){
		taxToPay = (500000-tax)*0.1;
	}
	else if (tax >= 500000 && tax <= 1000000){
		taxToPay = 500000*0.1 + (tax-500000)*0.15;
	}
	else if (tax > 1000000){
		taxToPay = 500000*0.1 + 500000*0.15 + (tax-1000000)*0.2;
	}
	salary = salary - taxToPay;
	return salary;
}

int main(){
	int workHour = 155;
	int salary = calcSalary(workHour);
	salary = calcTax(salary);
	salary += 1500000;
	int payLoan = salary - 2000000;	
	int left = 10000000;
	int month =0;
	cout <<  "Thu nhap sau thue cua sinh vien la: " << salary << endl;
	int currentDebt = left*(1+0.02);
	while (left>0){
		cout << "So tien lai cua ngan hang hien tai la : " << currentDebt << endl;
		left = left*(1+0.02) - payLoan;
		currentDebt = left*(1 +0.02);
	
		month++;
		if (left>0){
			cout << "So tien du no cua sinh vien dau thang la: " << left << endl; 
		}
	}
	cout << "Sau " << month << " thang thi sinh vien tra het no.";
}
