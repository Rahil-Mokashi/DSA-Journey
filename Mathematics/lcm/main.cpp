#include <iostream>

using namespace std;

// a*b = gcd(a,b) * lcm(a,b)
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int find_lcm(int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a, b;
    cout<<"Enter two nos: "<<endl;
    cin>>a>>b;

    cout<<find_lcm(a,b)<<endl;

    return 0;
}