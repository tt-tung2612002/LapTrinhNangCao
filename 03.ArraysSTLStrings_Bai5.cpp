#include<bits/stdc++.h>
using namespace std;

int main(){
	int rows,cols;
	cin >> rows >> cols;
	int startRow = 0;
	int startCol = 0;
	int endRow = rows-1;
	int endCol = cols-1;
	vector<int> temp (cols,0);
	int count =1;
	vector<vector<int>> arr(rows,temp);
	while (startRow <= endRow && startCol <= endCol){
		for (int i =startCol;i<=endCol;i++){
			arr[startRow][i] = count;
			count++;
		}
		for (int i = startRow+1;i <= endRow;i++){
			arr[i][endCol] = count;
			count++;
		}
		for (int i = endCol-1;i>= startCol;i--){
			arr[endRow][i] = count;
			count++;
		}
		for (int i = endRow-1;i > startRow;i--){
			arr[i][startCol] = count;
			count++;
		}
		startRow++;
		startCol++;
		endCol--;
		endRow--;
	}
	for (int i=0;i<rows;i++){
		for (int j=0;j<cols;j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}	
	system("pause");
}
