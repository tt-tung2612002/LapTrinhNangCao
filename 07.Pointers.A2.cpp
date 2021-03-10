#include<bits/stdc++.h>
using namespace std;
int sizeOfArrWhenPasssedByValue(int arr[]){
	return sizeof(arr);
}
int main(){
	int arr[4] = {1,2,3,4};
	cout << sizeof(arr) << endl;
	cout <<  sizeOfArrWhenPasssedByValue(arr);
	system("pause");
}