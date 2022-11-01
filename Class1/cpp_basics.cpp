/******************************************************************************

STL stands for Standard Template Library. Alexander Stepanov invented it in 1994, 
and later it was included in the standard library. The standard library consists 
of a set of algorithms and data structures that were originally part of the C++ 
Standard template library.
STL helps in storing and manipulating objects, and it makes the program reusable 
and robust.
https://www.simplilearn.com/tutorials/cpp-tutorial/cpp-standard-template-library 
*******************************************************************************/
/*
#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    int i=8, j=10;
    swap(i, j);
    printf("%d %d", i, j);
    return 0;
}*/
/** string */

/** vector */
/* Test vector class element access  (TestVectorIndex.cpp) */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;
/*
void print(const vector<int> & v);

// https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp9_STL.html

int main() {
   const int SIZE = 10;
   vector<int> numbers(SIZE);  // Declare vector of int of SIZE elements, init to 0
 
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
   print(numbers);
 
   // Assign numbers into vector
   for (int i = 0; i < numbers.size(); ++i) {
      numbers.at(i) = i+1;  
   }
   print(numbers);
 
   cout << "First element is " << numbers.front() << endl;
   cout << "Last element is " << numbers.back() << endl;
 
   // [] does not perform index bound check, but at() does
   cout << numbers[55] << endl;    // no error compile and run
   // cout << numbers.at(55) << endl; // runtime out_of_range exception
   
   return 0;
}


int main() {
   vector<int> numbers;  // Declare vector of int with initial size of 0
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
 
   // Assign random numbers into vector
   srand(time(0));
   for (int i = 0; i < 5; ++i) {
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
 
   numbers.clear();  // Remove all elements
   cout << "size = " << numbers.size() << endl;
   cout << "capacity = " << numbers.capacity() << endl;
   return 0;
}
 
// Print the content of this vector using indexing operator []
void print(const vector<int> & v) {
   for (int i = 0; i < v.size(); ++i) {
      cout << v[i] << " ";  // no bound check, but safe here
   }
   cout << endl;
}
*/
void print(vector<string> & v);
 
int main() {
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
   vector<string> newStrs;
   newStrs.push_back("1");
   newStrs.push_back("2");
   newStrs.push_back("3");
   strs.insert(strs.begin() + 1, newStrs.begin(), newStrs.end());
   print(strs);
   cout << "size = " << strs.size() << endl;
}
 
// Use iterator to iterate thru the entire vector
void print(vector<string> & v) {
   for (vector<string>::iterator iter = v.begin(); iter != v.end(); ++iter) {
      cout << *iter << " ";   // dereference
   }
   cout << endl;
}

/** set */

/** stack */

/** queue */

/** map */

/** algorithm */

/** sorting */

/** searching */