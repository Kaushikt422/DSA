#include <bits/stdc++.h>
 using namespace std;

int sortarr(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[0];
}

int main() {
    int n;
    cout<<"Enter the no of element in array"<<endl;
    cin>>n;
    cout<<"Enter the element: "<<endl;
    vector<int> arr(n);
    for(int i=0;i<arr.size();i++){
            cin>>arr[i];
    }
    for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" "<<endl;
    }
    cout<<"The smallest element in the array is:";
    cout<<sortarr(arr);
    return 0;
}