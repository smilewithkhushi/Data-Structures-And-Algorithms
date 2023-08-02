//conversion to binary and permutations
#include<iostream>
using namespace std;

void solve(){
    //convert the numbers into binary
    
    int num=7;
    int cnt= __builtin_popcount();
    cout<<"binary of "<<num<<" = "<<cnt<<endl;

    long long num2 = 145643456;
    int cnt2=__builtin_popcountll();
    cout<<"binary of "<<num2<<" = "<<cnt2<<endl;

    //print the permutations of the string

    string s="123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi=*max_element(a,a+n);

}

int main(){
    demo();
    return 0;
}