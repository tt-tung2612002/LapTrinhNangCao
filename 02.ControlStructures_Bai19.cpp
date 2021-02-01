#include <bits/stdc++.h>

using namespace std;			
int main() {
	int n;
	cout << "Tong so mon hoc can tinh DTB: ";
	cin >> n;
	multimap<int,int> mark;
	for (int i=1;i<=n;i++){
		cout << "Diem mon hoc thu " << i << " la: ";
		int diem,heso;
		cin >> diem;
		cout << "He so mon hoc thu " << i << " la: ";
		cin >> heso;
		mark.insert(pair<int,int>(diem,heso));
	}
	double tongDiem =0;
	double tongHeso =0;
	for (auto it : mark){
		tongDiem += it.first*it.second;
		tongHeso += it.second;
	}
	cout << "So mon hoc la: " << n << endl;
	cout << "Tong he so la: " << tongHeso << endl;
	cout << "Diem trung binh cua " << n << " mon hoc la: ";\
	cout << tongDiem/tongHeso;	
}
