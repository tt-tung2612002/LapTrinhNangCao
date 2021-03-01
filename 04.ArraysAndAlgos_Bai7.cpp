#include<bits/stdc++.h>
using namespace std;\
int currentSum = 0;
int result[3] {0};
int cnt =0;
void backtrack (int index,vector<string> &key,string str){
	if (index == str.size()+1){
		if (result[0] != 0 && result[1] != 0){
			for (int i=0;i<=str.size();i++){
				if(result[i]-1>=0){
					cout<<str[result[i]-1];
				}
			}
			cout << endl;
		}
		return;
	}
	for (int i=0;i<=str.size();i++){
		result[index]=i;
		backtrack(index+1,key,str);	
	}
}
int main(){
	string str;
	cin >> str;
	vector<string> key;
	backtrack(0,key,str);
	for (auto it: key) cout << it << endl;
   system("pause");
}