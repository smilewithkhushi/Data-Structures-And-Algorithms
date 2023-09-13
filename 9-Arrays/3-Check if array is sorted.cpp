//check if the array is sorted and or the sorted array has been rotated
//https://takeuforward.org/data-structure/check-if-an-array-is-sorted/

#include<iostream>
using namespace std;

int main(){
    int arrsize;
    cin>>arrsize;
    //input the array size;

    int arr[arrsize];

    for (int i=0; i<arrsize; i++){
        cin>>arr[i];
    }
    //input the array

    int count=0;

    //generating a counter that increases for any cycles in the array
    for (int i=1; i<arrsize; i++){
        if (arr[i-1]>arr[i]){
            count+=1;
        }
    }

    if (arr[arrsize-1]>arr[0]){
        count++;
    }
    cout<<count<<endl;
    if (count<=1) cout<<"True";
    else cout<<"False";
    return 0;
}