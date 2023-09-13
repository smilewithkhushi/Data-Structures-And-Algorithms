#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    //input of array size
    int arrsize;
    cin>>arrsize;
    vector<int> arr;
    cout<<"Enter the array : ";
    for (int i=0; i<arrsize; i++){
        cin>>arr[i];
    }
    //input of array

    //second largest element returned
    sort(arr.begin(), arr.end(), greater<int>());
    int ele = arr[1];
    cout<<ele;
    return 0;

}