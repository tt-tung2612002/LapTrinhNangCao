#include<bits/stdc++.h>
using namespace std;
int binarySearchHelper(int *arr, int target,int left,int right){
	if (left > right) return -1;
	int middle = (left+right)/2;
	int current = *(arr+middle);
	if (*(arr+middle) == target)  return middle;
	else if (*(arr+middle) > target) return binarySearchHelper(arr,target,left,middle-1);
	else return binarySearchHelper(arr,target,middle+1,right);
}
int binarySearch(int *arr, int len, int target){
	return binarySearchHelper(arr,target,0,len-1);
}
int main(){
	int x; 
	cin >> x;
	int len = 10;
	int arr[len] = {1,7,9,13,22,34,45,67,88,99};
	cout << binarySearch(arr,len,x);
	system("pause");
}