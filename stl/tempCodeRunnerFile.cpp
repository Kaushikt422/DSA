#include<bits/stdc++.h>
using namespace std;

void pairs(){

    pair<int ,int > a = {20,40};
    cout<<a.first<<endl<<a.second<<endl;

    pair <int , pair <int ,int >> p ={20 ,{40,60} };
    cout<<a.first << " " <<p.second.first <<" "<<p.second.second<<endl;
    
    pair<int , int > arr[] = {{1,2},{3,4},{5,6}};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i].first<< " "<<arr[i].second <<endl;
    }
}

int main(){

    pairs();
}
