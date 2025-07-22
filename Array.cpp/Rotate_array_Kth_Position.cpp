#include <bits/stdc++.h>
#include <vector>
using namespace std;


void rotate_arr(vector<int>& p,int k ){
     int n = p.size();
     k %= n;
     vector<int> temp(n);
     for(int i=0;i<n;i++){
         temp[(i+k)%n] = p[i];
     }
     p = temp;
}

void reverse_method(vector<int>& p,int start , int end){
    int n = p.size();
    while(start<=end){
        swap(p[start],p[end]);
        start++;
        end--;
    }
} 

void rotate(vector<int>& p,int k){
    int n = p.size();
    k=k%n;
    reverse_method(p,0,n-1);
    reverse_method(p,0,k-1);
    reverse_method(p,k,n-1);
}

int main() {
    int n,k;
    cout<<"Enter the size of the array: "<<endl;
    cin >> n;
    vector<int> nums(n);
    for(int i=0 ;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter the kth position : "<<endl;
    cin>> k;
    // rotate_arr(nums,k);
    // for(int num : nums) cout<< num<<" ";    extra space method O(n)
    rotate(nums,k);
    for(int num: nums) cout<< num <<" ";

    return 0;
}


