#include <iostream>

using namespace std;

int check_kbit(int n, int k){
    // k = 3 
    // int x = (1<<(k-1));

    int x = (n>>(k-1));
    if((x&1)!= 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int n, k;
    cout<<"Enter value of n and k: "<<endl;
    cin>>n>>k;

    check_kbit(n,k);

    return 0;
}