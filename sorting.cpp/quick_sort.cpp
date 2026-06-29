#include <bits/stdc++.h>
 using namespace std;

 int partition(vector<int> &arr, int st, int end){

    int indx = st-1;
    int pivot = arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            indx++;
            swap(arr[j], arr[indx]);

        }
    }
    indx++;
    swap(arr[end],arr[indx]);
    return indx;

 }

 void quick_sort(vector <int> &arr , int st , int end ){

    if(st<end){
        int pivInd =  partition(arr , st , end);
        quick_sort(arr, st , pivInd-1);
        quick_sort(arr , pivInd+1, end);
    }

 };


int main() {
    cout<<"enter the size of an array "<<endl;

    int n;
    cin>>n;

    vector <int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    } 
    quick_sort(arr , 0 ,arr.size()-1);
    cout<<endl <<"sorted array: ";
    for (int val: arr){
        cout<<val<< " ";
    }
    

    return 0;
}
