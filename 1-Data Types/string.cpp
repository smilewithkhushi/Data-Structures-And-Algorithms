#include<iostream>
#include<string>
using namespace std;

void explainString(){
    string name="Hi there";
    cout<<"String : "<<name<<endl;

    string age;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<endl<<"Age entered : "<<age<<endl;

    cout<<name.size()<<endl;           //beginning of name

    //traversing through string
    std :: string :: iterator it;
    for (it=name.begin(); it!=name.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}
int main(){
    void explainString();
    return 0;
}