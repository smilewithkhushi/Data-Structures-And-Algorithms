#include <iostream>
#include <map>
using namespace std;
// container stores in key value pairs and key can be of any data type but key is always unique
// map<key, value>
// stores unique keys in sorted order

void explainMap()
{

    map<int, int> mp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mppp;

    mp.emplace(2, 4);
    mp.insert({3, 6});

    cout << "Printing the map mp : " << endl;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    mpp[{1, 20}] = 20;
    cout << mp[1];
    cout << mp[5];

    auto it2 = mp.find(3);
    cout << *(it2).second; // find the key 3 and prints its value

    auto it3 = mp.lower_bound(2);
    auto it4 = mp.upper_bound(3);
    // erase , swap ,size and empty functions are same as above
}

void explainMultiMap(){
    //everything is same as map but it only stores the multiple keys
    //all functions can be used except mp[key] due to multiple keys
    //mostly works with O(log n)
}

void explainUnordredMap(){
    //same as set and unordered_set difference
    //has unique keys but keys are not sorted
    //mostly works in O(1)
}

int main()
{
    return 1;
}