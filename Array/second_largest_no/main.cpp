#include <iostream>

using namespace std;

int second_largest(int arr[], int n){
    int largest = 0;
    int second = -1;

    for(int i=1; i<n; i++){
        if(arr[i]>arr[largest]){
            second = largest;
            largest = i;
        }

        else if(arr[i]!=arr[largest]){
            if(second==-1||arr[i]>arr[second]){
                second = i;
            }
        }
    }

    return second;
}

int main(){
    int n = 10;
    int arr[n] = {10, 20 , 30, 20, 100, 210, 80, 40, 201, 20};

    cout<<"Second largest element: "<<second_largest(arr, n)<<endl;

    return 0;
}