// Container
// dynamic in nature when the size of data structure is unknown
// stores data similar fashion as a array

#include <iostream>
#include <vector>
using namespace std;

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    // adds a element in empty vector
    v.emplace_back(2);
    // dynamically increases the size and pushes 2 at back
    // emplace-back is faster than push back

    vector<pair<int, int>> vec;
    vec.push_back({2, 3});
    vec.emplace_back(4, 5);

    vector<int> vector1(5);
    // vector with defined size 5 as {0,0,0,0,0}

    vector<int> vector2(5, 20);
    //{20,20,20,20,20}

    vector<int> vectorcopy(vector2);
    //{20,20,20,20,20}

    // iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << endl;

    // v.begin() is a function that points to the memory location of the first element of the vector
    // it++ actually increments the location of the first element and then denotes the memory locaiton of thet second element
    //*(it) prints the value stored in the location saved in the it iterator

    it = it + 2;
    cout << *(it) << endl;
    // this increments the location by two indexes

    vector<int>::iterator it2 = v.end();
                                
    // points to the memory location at the end of the vector, that is , to the empty memory location after the last element memory occupied
    vector<int>::iterator it3 = v.rend();
    // reverses the vector first and then points to its end
    vector<int>::iterator it4 = v.rbegin();
    // reverses the vector first and then points to its beginning

    cout<< v[0] << " " << v.at(0);

    cout << v.back() << endl;

    cout << "iteration in the vectors" << endl;

    for (vector<int>::iterator it = v.begin(); it != v.end(); i++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin; it != v.end(); i++)
    {
        cout << *(it) << " ";
    }
    // auto keyword tells the program to use the relevant datatype automatically

    // for each loop in C++
    for (auto it : v)
    {
        cout << *(it) << " ";
    }

    // deleting an element from vector
    v.erase(v.begin() + 1);
    //{1,2,3,4} -> {1,3,4}

    // to delete multiple elements : erase(start, end)
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int> vector3(2, 100);    //{100,100}
    v.insert(v.begin(), 30);        // {300,100,100}
    v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}
    
    //<vectorname>.insert(position to enter element, <range of elements seperated by comma>)

    vector<int> copy2(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

    //{10,10}
    cout << v.size();

    // v1 = {10,20}
    // v2= {5,6}
    v1.swap(v2); // v1->{5,6} and v2->{10,20}

    v.clear(); // erases the entire vector
    cout << v1.empty();
}