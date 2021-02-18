#include<bits/stdc++.h>
using namespace std;

int check(int i,int j,vector<vector<char>> arr){
	int sum =0;
	if ((i-1)>=0 &&(i-1<=arr.size())){
		if (arr[i-1][j] == '*'){
			sum++;
		}
	}
	if ((i+1)>=0 &&(i+1<=arr.size())){
		if (arr[i+1][j] == '*'){
			sum++;
		}
	}
	if ((j-1)>=0 &&(j-1<=arr[0].size())){
		if (arr[i][j-1] == '*'){
			sum++;
		}
	}
	if ((j+1)>=0 &&(j+1<=arr[0].size())){
		if (arr[i][j+1] == '*'){
			sum++;
		}
	}
	if ((j-1)>=0 &&(j-1<=arr[0].size())&&(i+1)>=0 &&(i+1<=arr.size())){
		if (arr[i+1][j-1] == '*'){
			sum++;
		}
	}
	if ((j-1)>=0 &&(j-1<=arr[0].size())&&(i-1)>=0 &&(i-1<=arr.size())){
		if (arr[i-1][j-1] == '*'){
			sum++;
		}
	}
	if ((j+1)>=0 &&(j+1<=arr[0].size())&&(i-1)>=0 &&(i-1<=arr.size())){
		if (arr[i-1][j+1] == '*'){
			sum++;
		}
	}
	if ((j+1)>=0 &&(j+1<=arr[0].size())&&(i+1)>=0 &&(i+1<=arr.size())){
		if (arr[i+1][j+1] == '*'){
			sum++;
		}
	}
	return sum;	
}
int main(){
	int rows,cols;
	cin >> rows >> cols;
	vector<vector<char>> arr;
	for (int i=0;i<rows;i++){
		vector<char> temp;
		char ch;
		for (int j=0;j<cols;j++){
			cin >> ch;
			temp.push_back(ch);
		}
		arr.push_back(temp);
	}
	vector<vector<char>> arr2 =arr;
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			if (arr[i][j] == '*'){
				arr2[i][j] = '*';
			}
			else{
				arr2[i][j] = check(i,j,arr)+48;
			}
		}
	}
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
