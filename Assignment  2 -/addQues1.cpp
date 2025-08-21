#include<bits/stdc++.h>
using namespace std;

int diffEqualToK(vector<int> arr, int k){
     int n = arr.size();
     int count = 0;

     for(int i=0;i<n;i++){
          for(int j =i+1;j<n;j++){
               if(abs(arr[i]-arr[j]) == k){
                    count++;
               }
          }
     }
     return count;
}

int main(){
   vector<int> arr = {1, 4, 1, 4, 5};
    int k = 3;

    cout << diffEqualToK(arr, k);
    return 0;
}