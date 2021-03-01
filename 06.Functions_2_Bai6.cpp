#include<bits/stdc++.h>
using namespace std;
int currentSum = 0;
int result[100];
int cnt =0;
void backtrack (int index,int target,vector<int> amt,vector<int> arr,vector<vector<int>> &key){
	if (index == arr.size() || currentSum == target){
		if (currentSum == target){
			vector<int> temp;
			for (int i=0;i<cnt;i++){
				temp.push_back(result[i]);
			}
			key.push_back(temp);
		}
		return ;
	}
	for (int i=0;i<=amt[index];i++){
		if (currentSum + arr[index]*i <= target){
			currentSum += arr[index]*i;
			for (int j=0;j<i;j++){
				result[cnt] = arr[index];
				cnt++;
			}
			backtrack(index+1,target,amt,arr,key);
			currentSum -= arr[index]*i;
			for (int j=0;j<i;j++){
				cnt--;
			}
		}
	}
}
int main(){
	int n;	
	cin >> n;
	vector<int> arr;
	for (int i=1;i<=n;i++){
		arr.push_back(i);
	}
	do{
		for (int i=0;i<n;i++){
			cout << arr[i];
		}
		cout << endl;
	}while (next_permutation(arr.begin(),arr.end()));

   system("pause");
}