#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
        
    for(int i=1;i<n;i++){
        int current= arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0 ){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

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

    insertion_sort(arr,n);

    cout<<endl<<"The sorted array :"<<endl;

    for(int val:arr){
        cout<<val<<" ";
    }
    
}