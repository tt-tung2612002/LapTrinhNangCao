#include<bits/stdc++.h>
using namespace std;
int count_even(int* arr, int len){
	int count =0;
	for_each(arr,arr+5,[&count](int x){if(x%2==0) count++;});
	return count;
}
int main(){
	int len = 10;
	int arr[len] = {1,2,3,4,5,6,7,8,9,10};
	cout << count_even(arr,len) << endl;
	cout << count_even(arr+5,len) << endl;
	system("pause");
}