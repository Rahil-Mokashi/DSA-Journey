#include <iostream>

using namespace std;
// Passing the string as reference cause it reduces the copying of the string and improves efficency
bool isPalindrome(string &str, int start, int end){
    // Base case as start keeps increasing and end keeps decreasing
    if (start >= end){
        return true;
    }

    // return statement has two jobs one is to check is each character is same in start and end
    // and second is the character same then to recusive call the function to increase start and decrease end
    return (str[start]==str[end]) &&
        isPalindrome(str, start+1, end-1);
}

int main(){
    string word;

    cout<<"Enter the word: "<<endl;
    cin>>word; 
    // Give the length of the word
    int n = word.length();

    cout<<isPalindrome(word, 0, n-1)<<endl;

    return 0;
}