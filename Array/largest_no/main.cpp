// Largest element in an unsorted fixed array

#include <iostream>

using namespace std;

int largest_no(int arr[], int n)
{
    int large_index=0;

    for(int i = 1; i<n; i++){
        if(arr[i]>arr[large_index]){
            large_index = i;
        }
    }

    return large_index+1;
}

int main(){
    int cap = 6;
    int arr[cap] = {10, 20, 100, 40, 50, 40};


    cout<<"Largest element is at index: "<<largest_no(arr, cap);

    return 0;
}