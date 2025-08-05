// Deletion of an element in an unsorted fixed array

#include <iostream>

using namespace std;

int deletion(int arr[], int n, int x)
{
    int pos = -1 ;
    for(int i = 0; i<=n; i++){
        if(arr[i]==x){
            pos = i;
        }
    }
    if(pos == -1){
        return n;
    }

    for(int j = pos; j<n-1; j++){
        arr[j] = arr[j+1];
    }
    return n-1;
}

int main(){
    int x;
    int cap = 6;
    int arr[cap] = {10, 20, 30, 40};
    int n = 4;

    cout<<"Enter an element to delete: "<<endl;
    cin>>x;

    cout<<"Array elements: "<<deletion(arr, n, x);

    return 0;
}