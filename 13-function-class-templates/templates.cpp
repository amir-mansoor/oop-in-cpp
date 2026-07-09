#include <iostream>
using namespace std;

// template <class T>
// T find_max(T a, T b)
// {
//     T result;
//     result = (a > b) ? a : b;
//     return result;
// }

template <class T>
class List
{

    struct node
    {
        T val;
        node *next;
    };

    node *head, *last;
    void delete_after_node(node *current);

public:
    List();
    void push(T val);
    T pop();
    void print_list();
};

template <class T>
List<T>::List()
{
    last = head = NULL;
}

template <class T>
void List<T>::push(T val)
{
    node *temp = new node;
    temp->val = val;
    temp->next = NULL;
    if (last == NULL)
    {
        head = temp;
        last = temp;
    }
    else
    {
        last->next = temp;
        last = last->next;
    }
}

template <class T>
T List<T>::pop()
{
    T val;
    if (head->next == NULL)
    {
        val = last->val;
        delete head;
        head = NULL;
        last = NULL;
    }
    else
    {
        val = last->val;
        node *current = head;
        while (current->next != last)
        {
            current = current->next;
        }

        delete_after_node(current);
        last = current;
    }

    return val;
}

template <class T>
void List<T>::delete_after_node(node *current)
{
    node *temp = current->next;
    current->next = current->next->next;
    delete temp;
}

template <class T>
void List<T>::print_list()
{
    cout << "[";
    node *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }

    cout << "]" << endl;
}

int main()
{

    List<int> l;
    cout << "Creating list of integers" << endl;
    l.push(5);
    l.push(15);
    l.print_list();

    List<string> s;
    cout << "Creating list of strings" << endl;
    s.push("Ali");
    s.push("usman");
    s.print_list();

    s.pop();
    l.pop();
    s.print_list();
    l.print_list();

    // int x, y, k;
    // x = 25;
    // y = 30;
    // k = find_max<int>(x, y);

    // string a, b, c;
    // a = "asc";
    // b = "adca";
    // c = find_max<string>(a, b);
    // cout << c << endl;
    return 0;
}