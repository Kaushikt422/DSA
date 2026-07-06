#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int st,int mid ,int end){
    vector<int> temp;
    int i=st;
    int j=mid+1;
    while(i<=mid && j<=end ){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=end){
        temp.push_back(arr[j]);
        j++;
    }
    for(int indx=0;indx<temp.size();indx++){
        arr[indx+st] = temp[indx];
    }

};

void merge_sort(vector<int> &arr,int st,int end){
    if (st<end){
     int mid = st+(end-st)/2;

     merge_sort(arr,st,mid);
     merge_sort(arr,mid+1,end);
     merge(arr,st,mid,end);
    }
};

int main(){

    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter the element of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   merge_sort(arr , 0 , arr.size()-1);
   for(int val:arr){
    cout<<val<<" ";
   }

    return 0;
}