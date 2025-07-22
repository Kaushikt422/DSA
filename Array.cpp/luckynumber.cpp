// lucky number accenture./

#include<bits/stdc++.h>
 using namespace std;

int main() {
    int n;
    cin>>n;
    int digit = floor(log10(n)+1);
    if(n<=0|| !(digit==4)){
        cout<<"Invalid number";
    }
    else{
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    if(sum%3==0||sum%5==0||sum%7==0){
        cout<<"lucky number";
    }
    else{
        cout<<"not a lucky number";
    }
    }
    return 0;
}
