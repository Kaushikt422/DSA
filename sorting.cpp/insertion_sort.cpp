#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cout<<"Enter the number size of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the element in the array: "<<endl;

    for(int i = 0;i<n;i++){
            cin>>arr[i];
    }
    cout<<"Unsorter array: "<<endl;
    for(int val:arr){
        cout<<val<<" ";
    }
}