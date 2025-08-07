// Remove duplicate element from the sorted array

#include <iostream>

using namespace std;

int remove_duplicate(int arr[], int n){
    int res = 1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }

    for(int j=0;j<res;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    return res;
}

int main(){
    int n=10;
    int arr[n] = {10, 10, 10, 20, 30, 40, 40, 40, 50, 50};


    cout<<remove_duplicate(arr, n)<<endl;

    return 0;
}