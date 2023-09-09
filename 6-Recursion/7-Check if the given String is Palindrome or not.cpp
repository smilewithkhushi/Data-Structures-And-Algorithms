#include <iostream>
#include<string>
using namespace std;

bool checkPallindrome(string name, int start, int end)
{    
    if (name[start]!=name[end]){
        return false;
    }
    checkPallindrome(name, start+1, end-1 );
}

int main()
{
    //is program ko khud se adhi neend me likhne me 40 minute lg gye kripya ise expert ke salah ke saath hi padhein, savdhaan rahein satark rahein
    string name;
    cout<<"string daal : ";
    cin>>name;
    int len = name.length();
    bool result = checkPallindrome(name, 0 , len-1);
    if (result == false)
        cout << "is not pallindrome" << endl;
    else
        cout << "is pallindrome" << endl;
    return 0;
}