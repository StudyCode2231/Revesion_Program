#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    cout<<"the reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void reverse(int arr[], int n){
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[n-i-1]=arr[i];
    }
    printArray(ans,n);
}
int main(){
     int n = 5;
   int arr[] = {5,4,3,2,1};
   reverse(arr, n);
   return 0;
}