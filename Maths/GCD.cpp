#include<bits/stdc++.h>
using namespace std;

int gcd1(int a, int b){

    int res = min(a,b);
    while(res>0){

        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

int gcd2(int a, int b){
    while (a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int gcd3(int a, int b){

    if(b==0){
        return a;
    }
    else{
        return gcd3(b,a%b);
    }

}

int main(){
 int a ,b;
 cout<<"enter the number a :";
 cin>>a;
 cout<<"enter the number b :";
 cin>>b;
 cout<<"The HCF is :"<<gcd1(a,b)<<endl;
 cout<<"The HCF is :"<<gcd2(a,b)<<endl;
  cout<<"The HCF is :"<<gcd3(a,b);

 

}




