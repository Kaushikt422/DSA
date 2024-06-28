#include<bits/stdc++.h>
using namespace std;

//Itrative Solution
int Fact(int num){
    int res=1;
    for(int i=2;i<=num;i++){
        res = res*i;
    }
    return res;
}

// Recursive Solution
int Fact1(int num){
    if(num==0){
        return 1;
    }
    return num*Fact1(num-1);
}

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    cout<< Fact(num)<<endl;
    cout<< Fact1(num);
}
