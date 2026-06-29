#include <bits/stdc++.h>
 using namespace std;

int partition(vector<int> &arr,int st, int end){
            int pivot = arr[end];
            int indx = st-1;
            for(int j=st;j<end;j++){
                if(arr[j]<=pivot){
                    indx++;
                    swap(arr[j],arr[indx]);
                }
            }
            indx++;
            swap(arr[indx],arr[end]);
            return indx;

};

void quick_sort(vector <int> &arr,int st,int end){

    if(st<end){
    int pivind = partition(arr,st,end);
    quick_sort(arr,st,pivind-1);
    quick_sort(arr,pivind+1,end);
    }
    
};



int main() {

    int n;
    cout<< "enter the size of an array : ";
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the elements: ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    quick_sort(arr ,0,arr.size()-1);
    for(int val: arr){
        cout<<val<<" ";
    }
    return 0;
}