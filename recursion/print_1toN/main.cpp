#include <iostream>

using namespace std;

int print1toN(int n){
    if(n==0){
        return 0;
    }
    print1toN(n-1);
    cout<<n<<" ";
    
}

int main(){
    int n=0;
    cout<<"Enter a no: "<<endl;
    cin>>n;
    print1toN(n);

    return 0;
}