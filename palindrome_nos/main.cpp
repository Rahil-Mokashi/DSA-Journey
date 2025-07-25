#include <iostream>

using namespace std;

bool palindrome(int n){
    int temp = n;
    int res = 0;
    while (temp!=0){
    res = res*10 + temp % 10;
    temp = temp / 10;
    }

    if (res == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter a no: "<<endl;
    cin>>num;

    cout<<palindrome(num)<<endl;
    return 0;
}