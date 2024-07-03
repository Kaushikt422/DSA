#include<bits/stdc++.h>
using namespace std;

void explainVector(){

    // implement a vector and declare and insert element 

    vector<int> v;
    v.push_back(10);
    v.emplace_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);


    vector<pair<int ,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(2,4);

    vector <int> v1(5 , 100);
    vector<int> v2(v);

    // print the vector or itrate the vector

    for(auto it = v2.begin(); it != v2.end();it++){
        cout<<*(it)<<" ";
        
    }
    cout<<endl;
    for(auto it : v2){
        cout<< it << " ";
    }

    // delete the element of the vector
    v.erase(v.begin()+2,v.begin()+4);
    for(auto it : v2){
        cout<< it << " ";
    }
}

int main(){
    explainVector();
}
