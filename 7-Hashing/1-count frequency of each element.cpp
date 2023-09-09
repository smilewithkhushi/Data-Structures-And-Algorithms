#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arrsize;
    cin >> arrsize;
    int hasharr[arrsize] = {0};
    int arr[arrsize];

    // INPUT
    for (int i = 0; i < arrsize; i++)
    {
        cin >> arr[i];
    }
    // precompute
    for (int i = 0; i < arrsize; i++)
    {
        hasharr[arr[i]]++;
    }

    // output
    int q=0;
    while (q<=arrsize)
    {
        cout<<q<<" "<<hasharr[q]<<endl;
        q++;
    }
    return 0;
}