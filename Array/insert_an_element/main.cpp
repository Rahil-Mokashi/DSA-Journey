// Insertion of an element in an unsorted fixed array

#include <iostream>

using namespace std;

int insert(int arr[], int n, int x, int pos, int cap)
{
    if(cap==n){
        return n;
    }

    int i_ind = pos - 1; //Posititon needs to be reduced by 1 to match the indexing of array 
    for(int i=n-1; i>=i_ind; i--){
        arr[i+1] = arr[i];
    }
    arr[i_ind] = x;
    return n+1;
}

int main(){
    int x, pos;
    int cap = 6;
    int arr[] = {10, 20, 30, 40};
    int n = 4;

    cout<<"Enter an element and position: "<<endl;
    cin>>x>>pos;

    cout<<"Array elements: "<<insert(arr, n, x, pos, cap);

    return 0;
}