#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
     int n = arr.size();
     for(int i=n-1;i>=0;i--){
          int didSwap = 0;
          for(int j=0;j<=i-1;j++){
               if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    didSwap = 1;
               }
          }
     if(didSwap == 0){
          break;// leave the loop since the thing is sorted already
     }     
     
     }

}

int main(){
     
     vector<int> arr = {64,34,25,12,22,11,90};
     int n = arr.size();
     bubbleSort(arr);
     
     for(int i=0 ; i<n ; i++){
          cout << arr[i] << " ";
     }
     return 0;
}