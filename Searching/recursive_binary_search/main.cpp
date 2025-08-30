#include <iostream>

using namespace std;

int recursive_bs(int arr[], int low, int high, int x){
    int mid = (low+high)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid] == x){
        return mid;
    }
    else if(arr[mid]<x){
        recursive_bs(arr, mid+1, high, x);
    }
    else{
        recursive_bs(arr, low, mid-1, x);
    }
}

int main(){
    int n = 10;
    int arr[n] = {10, 20, 30, 40, 50 ,60 ,70 ,80, 90, 100};

    cout<<recursive_bs(arr, 0, 9, 80)<<endl;
    return 0;

}