#include <iostream>
                                        // Two Pointer approach
using namespace std;

void reverse_arr(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    swap(arr[start],arr[end]);

    reverse_arr(arr,++start,--end );

}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
}

int main() {
    int n;
    cout<<"enter the size of the array : ";
    cin >> n;
    int arr[n];
    // int start = arr[0];
    // int end = arr[n-1];
    cout<<"Enter the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    reverse_arr(arr,0,n-1);
    print(arr,n);

    return 0;
}
