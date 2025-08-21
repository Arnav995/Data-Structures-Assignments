#include<bits/stdc++.h>
using namespace std;

int distinctElementsNum(vector<int> arr){
     int n = arr.size();
     int distinctCount = 0;
     for(int i=0 ; i < n ; i++){
               bool isDistinct =  true;// considering everything distinct by default
          for(int j = 1 ; j < i ; j++){
               if(arr[i] == arr[j]){
                    isDistinct = false;// Duplicate found
                    break;
               }// if no duplicate found
               
          }
          if(isDistinct == true){
                    distinctCount++;
               }
     }
     return distinctCount;
}

int main(){

     vector<int> arr = {2,3,4,6};
     int distinct = distinctElementsNum(arr);
     cout<<distinct;
     return 0;
}