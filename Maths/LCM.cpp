#include<bits/stdc++.h>
using namespace std;

int lcm1(int x,int y){
    int res = max(x,y);
    while (true){
        if(res%x==0 && res%y==0){
            return res;
        }
        res++;

    }
    return res;
}


int gcd3(int a, int b){

    if(b==0){
        return a;
    }
    else{
        return gcd3(b,a%b);
    }

}


    int lcm2(int a, int b){
    return a*b/gcd3(a,b);
}


int main(){
    int a ,b;
    cout<<"enter the number a :";
    cin>>a;
    cout<<"enter the number b :";
    cin>>b;
    cout<<"The LCM of the number is :"<<lcm1(a,b)<<endl;
    cout<<"The LCM of the number is :"<<lcm2(a,b);

}
