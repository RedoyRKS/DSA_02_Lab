#include <iostream>
#include <cstdio>
#include <vector>
#include<iterator> // for iterators
using namespace std;

// https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp9_STL.html

void print(const vector<int> &v);

int main()
{
    // initialize
    vector<int> list3(5);
    vector<int> list4;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        list4.push_back(x);
    }
    // size of vector
    cout << "size " << list4.size() << endl;

    // iterate over vector - way 1
    for (int i = 0; i < list4.size(); i++)
        cout << "[" << i << "] " << list4[i] << endl;

    for (int x : list4)
        cout << x << endl;

    for (auto i = list4.begin(); i != list4.end(); i++)
    {
        cout << *i << endl;
    }
}

int main1()
{

    const int SIZE = 10;
    vector<int> numbers(SIZE); // Declare vector of int of SIZE elements, init to 0

    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;
    print(numbers);

    // Assign numbers into vector
    for (int i = 0; i < numbers.size(); ++i)
    {
        numbers.at(i) = i + 1;
    }
    print(numbers);

    cout << "First element is " << numbers.front() << endl;
    cout << "Last element is " << numbers.back() << endl;

    // [] does not perform index bound check, but at() does
    cout << numbers[55] << endl; // no error compile and run
    // cout << numbers.at(55) << endl; // runtime out_of_range exception

    return 0;
}

int main2()
{
    vector<int> numbers; // Declare vector of int with initial size of 0
    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;

    // Assign random numbers into vector
    srand(time(0));
    for (int i = 0; i < 5; ++i)
    {
        numbers.push_back(rand() % 100);
        // Append element at the end - vector resize automatically
    }
    print(numbers);
    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;

    numbers.pop_back(); // Remove the last element - size reduces by 1
    numbers.pop_back();
    print(numbers);
    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;

    numbers.clear(); // Remove all elements
    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;
    return 0;
}

// Print the content of this vector using indexing operator []
void print(const vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " "; // no bound check, but safe here
    }
    cout << endl;
}

void print(vector<string> &v);

int main3()
{
    vector<string> strs;
    strs.push_back("apple");
    strs.push_back("orange");
    strs.push_back("banana");
    print(strs);
    cout << "size = " << strs.size() << endl;

    // Test insert()
    strs.insert(strs.begin() + 2, "b4-banana");
    strs.insert(strs.begin() + 1, 2, "b4-orange");
    print(strs);
    cout << "size = " << strs.size() << endl;

    // Test erase()
    strs.erase(strs.begin() + 1, strs.begin() + 4);
    print(strs);
    cout << "size = " << strs.size() << endl;

    // insert() from another vector
    vector<string> new_strs;
    new_strs.push_back("1");
    new_strs.push_back("2");
    new_strs.push_back("3");
    strs.insert(strs.begin() + 1, new_strs.begin(), new_strs.end());
    print(strs);
    cout << "size = " << strs.size() << endl;
}

// Use iterator to iterate thru the entire vector
void print(vector<string> &v)
{
    for (vector<string>::iterator iter = v.begin(); iter != v.end(); ++iter)
    {
        cout << *iter << " "; // dereference
    }
    cout << endl;
}