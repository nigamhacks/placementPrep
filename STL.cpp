#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()

{
    // vector
    cout << "-----------Vector-----------" << endl;
    vector<int> a = {1, 5, 6, 7};
    for (int i : a)
    {
        cout << i << endl;
    }

    cout << "-----------deque-----------" << endl;
    // deque
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    // for removing we use 1-pop_back
    //                     2-pop_front
    for (int i : d)
    {
        cout << i << endl;
    }
    // we can also access element on front and back e.g. cout<<d.front()
    // if we want use erase it will erase the size not capacity
    d.erase(d.begin());
    cout << "after erase" << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    cout << "----------list------------" << endl;

    // doubly linked list
    // It has two pointers
    //      list            =>                  |3|2|1|
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_front(3);

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    // copy one list to another
    list<int> k(l);
    cout << "copied list"
         << " ";

    for (int i : k)
    {
        cout << i << " ";
    }
    cout << endl;
    // intialize list with elements of same value like----list={1,1,1,1,1,1}
    list<int> f(5, 7); // five times seven will be printed
    for (int i : f)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "----------Stack------------" << endl;

    // stack
    stack<string> s;

    s.push("fun");
    s.push("so");
    s.push("is");
    s.push("doing");
    s.push("cp");

    cout << "Top Element => " << s.top() << endl;
    s.pop();
    cout << "after pop " << endl;
    cout << "Top Element => " << s.top() << endl;
    cout << "size of stack => " << s.size() << endl;
    cout << "Empty or Not => " << s.empty() << endl;

    cout << endl;
    cout << "----------Queue------------" << endl;

    queue<string> q;
    // As Queue follows FIFO
    q.push("fun");
    q.push("so");
    q.push("is");
    q.push("doing");
    q.push("cp");

    cout << "First element => " << q.front() << endl;
    cout << "after pop" << endl;

    q.pop();
    cout << "first element is now => " << q.front() << endl;

    cout << endl;
    cout << "----------Priority Queue ------------" << endl;
    // MAX HEAP
    priority_queue<int> maxi;

    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(6);
    maxi.push(7);
    maxi.push(9);
    maxi.push(5);
    int n = maxi.size();
    cout << "----- max heap -----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    cout << "----- min heap -----" << endl;

    mini.push(1);
    mini.push(6);
    mini.push(7);
    mini.push(9);
    mini.push(5);
    mini.push(11);

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    cout << "Check Empty or Not => " << mini.empty() << endl;

    cout << "----------Set------------" << endl;
    set<int> s1;
    s1.insert(3);
    s1.insert(4);
    s1.insert(4);
    s1.insert(5);
    s1.insert(5);
    s1.insert(1);
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);

    // It stores only Unique element
    // It gives output in sorted order
    for (int i : s1)
    {
        cout << i << endl;
    }

    set<int>::iterator it1 = s1.begin();
    it1++;
    s1.erase(it1);
    cout << "after erase" << endl;
    for (int i : s1)
    {
        cout << i << endl;
    }

    // count function tells if the element is present or not

    cout << "check if 2 is present or not => "
         << "`" << s1.count(2) << "`" << endl;

    // find function tells if the element is present and return it's iterator

    std::set<int> example = {1, 2, 3, 4, 5, 6, 9, 0};

    if (auto search = example.find(9); search != example.end())
        cout << "Found " << (*search) << '\n';
    else
        cout << "Not found\n";

    cout << endl;

    cout << "----------Map------------" << endl;
    // map<key, value>
    map<int, string> m1;
    m1[1] = "hi";
    m1[2] = "what's up";
    m1[3] = "it's 1 AM";
    m1[4] = "still awake?";
    for (auto i : m1)
    {
        cout << i.first << "-" << i.second << endl;
    }
    cout << endl;
    //
    auto it = m1.find(2);
    for (auto i = it; i != m1.end(); i++)
    {
        cout << (*i).first << endl;
        // below code works same as (*i).first
        // cout << i->first << endl;
    }

    return 0;
}