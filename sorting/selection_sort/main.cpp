#include <iostream>
using namespace std;
void selectSort(int arr[], int n){
    for(int i = 0; i<n-1; i++){
        int mid_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[mid_index]){
                mid_index = j;
            }
        }
        int temp;
        temp = arr[mid_index];
        arr[mid_index] = arr[i];
        arr[i] = temp;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";

    }

}

int main(){
    int arr[] = {10, 4, 7, 20, 40};

    int n = sizeof(arr)/sizeof(arr[0]);

    selectSort(arr, n);

    return 0;
}