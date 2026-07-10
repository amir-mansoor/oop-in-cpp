#include <vector>
#include <iostream>
using namespace std;

void output_vector_values(vector<int> v)
{
    cout << "[";
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "]" << endl;

    // alternatively
    cout << "[";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << "]" << endl;
}

void reverse_vector_values(vector<int> v)
{
    cout << "[";
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << "]" << endl;
}

int main()
{
    vector<int> marks;
    for (int i = 0; i < 5; i++)
    {
        marks.push_back(i * 10);
    }

    // vector<int> test{1, 2, 3, 4, 5};
    int val = marks[1];
    cout << "At index 1: " << val << endl;
    output_vector_values(marks);
    reverse_vector_values(marks);

    // let's remove a value from a specific position
    auto it = marks.begin();
    marks.erase(it + 2);
    cout << "remove: " << endl;
    marks.pop_back();
    output_vector_values(marks);
    return 0;
}