#include<bits/stdc++.h>
using namespace std;

bool isPalindrom(int num){

    int rev = 0;
    int temp = num;
    while(temp!=0){
        int id = temp % 10;
        rev = rev*10+id;
        temp = temp/10;
    }
    return (rev==num);
    // if(rev==num) return true;
    // else return false;
}

int main(){
    int num ;
    cout<<"Enter the number: ";
    cin>>num;
    // cout<<isPalindrom(num);
    isPalindrom(num);
    if(isPalindrom(num)){
        cout<<"True";
    }
    else{
        cout<<"false";
    }
    return 0;

}


#include<bits/stdc++.h>
using namespace std;

int main(){
    
}

