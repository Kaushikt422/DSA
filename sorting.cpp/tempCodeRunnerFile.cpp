#include <bits/stdc++.h>
 using namespace std;
  

 void selection_sort(vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int minIdx= i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
 }

int main() {

    int n;
    cout<<"enter the element in the arr: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the element of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selection_sort(arr,arr.size());
    for(int val:arr){
        cout<<val<<" ";
    }
    return 0;
}