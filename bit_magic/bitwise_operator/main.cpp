#include <iostream>

using namespace std;

int main(){
    unsigned x = 5;
    unsigned y = 10;

    cout<<"Bitwise AND: "<<(x&y)<<endl; //Bitwise and operator
    cout<<"Bitwise OR: "<<(x|y)<<endl; // Bitwise or operator
    cout<<"Bitwise XOR: "<<(x^y)<<endl; // Bitwise xor operator

    cout<<"Bitwise NOT: "<<~x<<endl; // Bitwise not operator
    cout<<"Bitwise LEFT: "<<(x<<2)<<endl; // Bitwise left shift
    cout<<"Bitwise RIGHT: "<<(x>>2)<<endl; // Bitwise right shift
    return 0;
}