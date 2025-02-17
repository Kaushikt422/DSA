#include <bits/stdc++.h>
 using namespace std;

 int convert_binary_to_number(int num){
    int sum=0;
    int pow = 1;
    while(num>0){
        int rem = num % 10 ;
        num = num / 10 ;
        sum = sum + (rem*pow);
        pow = pow * 2;
    }
    return sum ;
 }

int main() {
    long long num;
    cin>>num;
    cout<< convert_binary_to_number(num)<<endl;
    return 0;
}