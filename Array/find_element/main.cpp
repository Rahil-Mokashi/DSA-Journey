// Finding the element from the unsorted array and if the index of its frist occurence

#include <iostream>

using namespace std;

int find_ele(int arr[], int n, int x){
    
    for(int i = 0; i <= n; i++){
            if(arr[i]==x){
                return i;
            }
    }
    return -1;
}

int main(){
    int arr[] = {10, 20, 30 ,40, 50};

    int n = 5;
    int x;
    cout<<"Enter the element: "<<endl;
    cin>>x;

    cout<<"The element is at "<<find_ele(arr, n, x)<<" index."<<endl;
    return 0;
}