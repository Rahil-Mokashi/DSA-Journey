// Moving the zeroes to the end of the array

#include <iostream>

using namespace std;

int move_zeroes(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]); 
            count++;
        }
    }

    for(int i = 0; i <n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n = 6;
    int arr[n] = {10, 0, 6, 0, 3, 0};

    move_zeroes(arr, n);
    return 0;
}