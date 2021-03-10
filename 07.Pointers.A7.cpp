#include<bits/stdc++.h>
using namespace std;

int countSubstring(string a, string b){   
    int count = 0;
	bool check = false;
    for (int i=0;i<b.size()-a.size()+1;i++){
        string temp = "";
		if (check){
			i+= a.size()-1;
			check = false;
		}
        for (int j=0;j<a.size(); j++)
            temp += b[j+i];
        if (strcmp(a.c_str(),temp.c_str()) == 0){ 
			count++;
			check  = true;
		}
    }
    return count;
}
int main(){
    string a,b;
    cin >> a >> b;
    cout << countSubstring(a,b);
	system("pause");
}