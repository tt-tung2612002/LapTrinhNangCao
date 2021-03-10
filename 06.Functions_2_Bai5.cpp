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
	vector<int> amt;
	vector<int> arr;
	for (int i=1;i<n;i++){
		amt.push_back(n/i);
		arr.push_back(i);
	}
	vector<vector<int>> key;
	backtrack(0,n,amt,arr,key);
	for (auto it : key){
		for (auto it2: it){
			cout << it2 << " ";
		}
		cout << endl;
	}

   system("pause");
}