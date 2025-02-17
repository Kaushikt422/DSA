#include <bits/stdc++.h>
 using namespace std;

int convert_number_to_binary(int num){
    int ans = 0;
    int pow = 1; 

    while (num>0){
        int rem = num % 2;
        num = num / 2 ;
        ans = ans + (rem * pow) ;
        pow = pow * 10;

    }

    return ans ;
}

int main() {
    int num ;
    cin >> num;
    cout<< convert_number_to_binary(num)<< endl;
    return 0;
}