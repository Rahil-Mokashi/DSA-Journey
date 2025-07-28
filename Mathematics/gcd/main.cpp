#include <iostream>

using namespace std;

int find_gcd(int a, int b){
    int gcd = min(a,b);
    while(gcd>0){
        if(a%gcd==0 && b%gcd==0){
            break;
        }
        gcd--;
    }
    return gcd;
}

// Euclilean Algorithm
int gcd(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b = b -a;
        }
    }
    return a;
}

int optimized_gcd(int a, int b){
    if(b==0){
        return a;
    }
    return optimized_gcd(b, a%b);

}

int main(){
    int a=0, b=0;
    cout<<"Enter two nos: "<<endl;
    cin>>a>>b;

    cout<<gcd(a, b)<<endl;
    cout<<find_gcd(a, b)<<endl;

    return 0;
}