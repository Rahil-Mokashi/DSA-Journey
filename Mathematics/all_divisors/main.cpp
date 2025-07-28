#include <iostream>

using namespace std;


int get_divisors(int n){
    int i;
    for(i=1; i*i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    i--;
    for(; i>=1; i--){
        if(n%i==0 && i != n /i){
            cout<<n/i<<" ";
        }
    }

    
}

int main(){
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;

    get_divisors(n);
    return 0;
}