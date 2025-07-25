#include <iostream>

using namespace std;

int count_d(int n){
    int res = 0;
    while(n!=0){
        res++;
        n=n/10;
    }
    return res;
}

int main(){
    int a;
    cout<<"Enter a no: "<<endl;
    cin>>a;

    cout<<count_d(a)<<endl;
    return 0;
}