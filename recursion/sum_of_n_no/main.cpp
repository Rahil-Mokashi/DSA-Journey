// Sum of n natural nos

#include <iostream>

using namespace std;

int sum_N_no(int n){
    if(n<1){
        return 0;
    }
    return n*(n+1)/2;
}

int main(){
    int n;

    cout<<"Enter a no: "<<endl;
    cin>>n;

    cout<<sum_N_no(n)<<endl;

    return 0;
}