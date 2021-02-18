#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> array;
	for (int i=0;i<n;i++){
		int x;
		cin >> x;
		array.push_back(x);
	}
	int counter = 0;
	bool isSorted;
  	for (int i=0;i<array.size()-1;i++){		
		isSorted = true;
		for (int j=0;j<array.size()-1-counter;j++){
			if (array[j]>array[j+1]){
				swap(array[j],array[j+1]);
					isSorted = false;
				}
			}
		if(isSorted) break;
		counter++;
	}
	int waitTime = accumulate(array.begin(),array.end()-1, int{});
	cout << "Tong thoi gian doi toi uu la " << waitTime;
	system("pause");
}
