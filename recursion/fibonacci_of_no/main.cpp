#include <iostream>

using namespace std;


int fibo_series(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fibo_series(n-1) + fibo_series(n-2);
}

int main(){
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;

    cout<<fibo_series(n)<<endl;
    return 0;
}