Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}

Output:
1 3 4 7 9

CODE:=

#include<iostream>
using namespace std;
int main(){
    int s;
    cout<<"N: ";
    cin>>s;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    int g=arr[0];
    for(int i=0;i<s-1;i++){
        for(int k=0;k<s-i-1;k++){
            if(arr[k]>arr[k+1]){
                swap(arr[k],arr[k+1]);
            }
            else{
                continue;
        }
    }
    }
    for(int j=0;j<s;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}
