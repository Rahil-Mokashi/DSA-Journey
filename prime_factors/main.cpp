#include <iostream>

using namespace std;

int prime_factors(int n){
    int temp = n;
    if(temp==1){
        return 0;
    }
   
    for(int i=2; i*i<=temp; i++){
        while(temp %i ==0){
            cout<<i<<" ";
            temp = temp / i;
        }
    }

    if(temp > 1){
        cout<<temp;
    }
}

int main(){
    int n;
    cout<<"Enter a no: "<<endl;
    cin>>n;

    prime_factors(n);
    return 0;
}