// Example 1:
// Input: array[] = {10,5,10,15,10,5};
// Output: 10 15
// Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.

// Example 2:

// Input: array[] = {2,2,3,4,4,2};
// Output: 2 3
// Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arrsize;
    cin>>arrsize;
    int arr[arrsize];
    unordered_map<int, int> map;
    //input and precompute
    for (int i=0; i<arrsize; i++){
        cin>>arr[i];
        map[arr[i]]++;
    }

    //comparing frequencies
    int maxfreq=0;
    int minfreq=arrsize;
    int minfreqele=0;
    int maxfreqele=0;

    for (auto x : map){
        int element = x.first;
        int frequency = x.second;

        if (frequency>=maxfreq){
             maxfreq=frequency;
             maxfreqele = element;
        }
        if (frequency<minfreq){
            minfreq= frequency;
            minfreqele= element;
        }
    }

    cout<<"Result"<<endl;
    cout<< maxfreqele << " and "<< minfreqele<<endl;    

    return 0;
}