#include <iostream>

using namespace std;

int getPiece(int n, int a, int b, int c){
    if(n==0)
        return 0;
    if(n<0)
        return -1;

    int res = max(getPiece(n-a, a, b, c), max(getPiece(n-b, a, b, c), getPiece(n-c, a, b, c)));

    if(res == -1)
        return -1;

    return res + 1;
}

int main(){
    int n, a, b, c;
    cout<<"Enter the length: ";
    cin>>n;
    cout<<"Enter the cuts: "<<endl;
    cin>>a>>b>>c;

    cout<<getPiece(n,a, b,c)<<endl;
    return 0;
}