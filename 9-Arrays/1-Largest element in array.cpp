#include<iostream>
using namespace std;

int result(int arr[], int arrsize){
    int ele=0;
    for (int i=0; i<arrsize; i++){
        if (arr[i]>=ele){
            ele=arr[i];
        }
    }
    
    return ele;

}

int main(){
    int arrsize;
    cin>>arrsize;
    //input of array size
    int arr[arrsize];

    for (int i=0; i<arrsize; i++){
        cin>>arr[i];
    }
    //input of array

    //largest element returned
    int ele=result(arr, arrsize);
    cout<<ele;
    return 0;

}