// Finding the trailing no of zeros in the factorial of input n

#include <iostream>

using namespace std;

int find_trail(int n){

    // if(n == 0){
    //     return 1;
    // }
    // int fact = 1;
    // int res = 0;
    // for(int i=2; i<=n; i++){
    //     fact = fact * i;
    // }

    // while(fact%10==0){
    //     res++;
    //     fact = fact/10;
    // }
    // return res;

    // Efficient and less time complexity 
    int res = 0;
    for(int i=5; i<n; i=i*5){
        res = res + n/i;  
    }
    return res;
}

int main(){
    int num;

    cout<<"Enter a num: "<<endl;
    cin>>num;

    cout<<find_trail(num)<<endl;
    return 0;
}