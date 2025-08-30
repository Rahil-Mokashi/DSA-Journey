// BInary search
// arr[mid] == x return mid
// arr[mid] > x; high = mid - 1;
// arr[mid] < x; low = mid + 1
// Base case if low gets greater than high
#include <iostream>

using namespace std;

int binary_search(int arr[], int x, int n){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]<x)
            low = mid+1;
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n = 6;
    int arr[] = {5, 10, 30, 50, 60, 70};

    cout<<binary_search(arr, 20, 5)<<endl;

    return 0;
}