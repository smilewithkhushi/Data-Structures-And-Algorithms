// rotate the array by 1 place
#include <iostream>
#include <vector>
using namespace std;

void output(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}


void rotateArray(vector<int> arr)
{
    int temp = arr[0];
    for (int i = 1; i < arr.size() - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[arr.size() - 1] = temp;
    output(arr);
    return;
}


int main()
{
    vector<int> arr;
    int num;
    cin >> num; // size of arr

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    output(arr);

    rotateArray(arr);
}