                                               // Vector Functions
 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,6};

    cout<<"Size of vector: "<<vec.size()<<endl;

    vec.push_back(7);
    vec.push_back(8);
    vec.push_back(9);
    cout<<"Size of vector after push back: "<<vec.size()<<endl;

    vec.pop_back();
    vec.pop_back();
    cout<<"Size of vector after pop back: "<<vec.size()<<endl;

    cout<<"front element: "<<vec.front()<<endl;
    cout<<"back element: "<<vec.back()<<endl;
    cout<<"Element at index: "<<vec.at(3)<<endl;

    cout<<"Size of vector: "<<vec.size()<<endl;
    cout<<"Capacity of vector: "<<vec.capacity()<<endl;


    return 0;
}                                   