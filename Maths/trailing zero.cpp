#include<bits/stdc++.h>
using namespace std;

int Fact(int num){
    long long res=1;
    int reg=0;
    for(int i=2;i<=num;i++){
        res = res*i;
    }
    while(res%10==0){
        reg++;
        res=res/10;
    }
    return reg;

}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"The number of zero is "<<Fact(n);
}

