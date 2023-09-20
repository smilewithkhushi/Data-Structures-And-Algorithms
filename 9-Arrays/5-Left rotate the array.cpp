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

//rotate by D places
void rotate(vector<int>& nums, int k) {
        int pos=nums.size();
        k=k%pos;
        vector<int> temp(k);
        for (int i=0; i<k; i++){
            temp[i]=nums[i];
        }

        for (int i=k; i<pos; i++){
            nums[i-k]=nums[i];
        }
        for (int i=pos-k; i<pos; i++){
            nums[i]=temp[i-(pos-k)];
        }
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