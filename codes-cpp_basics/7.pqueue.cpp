#include <iostream>
#include <queue>

using namespace std;

int main(){

    priority_queue<int> Q;
    Q.push(10);
    Q.push(30);
    Q.push(20);
    Q.push(5);
    Q.push(1);
 
    cout << "\nQ.size() : " << Q.size();
    cout << "\nQ.top() : " << Q.top();
 
    cout << "\ngquiz.pop() : ";
    Q.pop();
    
    while (!Q.empty())
    {
        cout << Q.top() << endl;
            Q.pop();
    }
}