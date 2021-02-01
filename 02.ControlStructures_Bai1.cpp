#include<bits/stdc++.h>

using namespace std;
bool checkPrime (int n){
    if (n==1 || n==0){
        return false;
    }
    for (int i=2;i<=n/2;i++){
        if(n%2==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    if (checkPrime(n)){
        cout << "Yes";
    }
    else cout << "No";
    system("pause");
}