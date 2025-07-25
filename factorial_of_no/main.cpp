#include <iostream>

using namespace std;

double find_fact(double n){
    double temp = 1;
    if(n==0 || n == 1){
        return 1;
    }
    while(n!=1){
        temp = temp * n;
        n = n - 1;
    }

    return temp;

    // return n*find_fact(n-1);

}

int main(){

    double num;
    cout<<"Enter a no: "<<endl;
    cin>>num; 

    cout<<find_fact(num)<<endl;
    return 0;
}