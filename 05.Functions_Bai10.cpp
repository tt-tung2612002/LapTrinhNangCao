#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplet (vector<int> arr){
   vector<vector<int>> result;
   for (int i=0;i<arr.size()-2;i++){
      for (int j=i+1;j<arr.size()-1;j++){
         for (int k=j+1;k<arr.size();k++){
            if ((arr[i]+arr[j]+arr[k])%25==0){
               result.push_back({arr[i],arr[j],arr[k]});
            }
         }
      }
   }
   return result;
}
int main(){
   int n;
   cin >> n;
   vector<int> arr;
   srand(time(0));
   for (int i=0;i<n;i++){
      int x = rand()%49+1;
      arr.push_back(x);
   }
   auto result = triplet(arr);
   for (auto it : result){
      for (auto it2: it){
         cout << it2 << " ";
      }
      cout << endl;
   }
   system("pause");

}