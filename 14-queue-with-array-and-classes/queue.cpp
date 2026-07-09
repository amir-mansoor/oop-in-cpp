#include <iostream>
using namespace std;

#define SIZE 5

void pause()
{
    getchar();
}

class Queue
{
private:
    int q[SIZE];
    int in, out;
    bool is_empty, is_full;

public:
    Queue();
    void inc(int *arrow);
    void enqueue(int val);
    int dequeue();
    void print_queue();
};

Queue::Queue()
{
    for (int i = 0; i < SIZE; i++)
    {
        q[i] = 0;
    }

    in = 0;
    out = 0;
    is_empty = true;
    is_full = false;
}

void Queue::inc(int *arrow)
{
    if (*arrow + 1 == SIZE)
    {
        *arrow = 0;
    }
    else
    {
        *arrow += 1;
    }
}

void Queue::enqueue(int val)
{
    if (is_full)
    {
        throw "Cannot enqueue! Queue is full";
    }

    q[in] = val;
    inc(&in);
    if (in == out)
    {
        is_full = true;
    }

    is_empty = false;
}

int Queue::dequeue()
{
    if (is_empty)
    {
        throw "cannot dequeue! Queue is empty";
    }

    int ret = q[out];
    q[out] = 0;
    inc(&out);
    if (in == out)
    {
        is_empty = true;
    }

    is_full = false;
    return ret;
}

void Queue::print_queue()
{
    cout << "[\t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << q[i] << "\t";
    }
    cout << "]" << endl;

    cout << "\t";
    for (int i = 0; i < SIZE; i++)
    {
        cout << i << "\t";
    }
    cout << " " << endl;

    cout << " ";
    for (int i = 0; i <= in; i++)
    {
        cout << "\t";
    }

    cout << "^in" << endl;

    cout << " ";
    for (int i = 0; i <= out; i++)
    {
        cout << "\t";
    }

    cout << "^out" << endl;
    pause();
}

int main()
{
    Queue q;
    q.enqueue(10);
    q.print_queue();
    q.enqueue(20);
    q.print_queue();
    q.enqueue(30);
    q.print_queue();
    q.enqueue(40);
    q.print_queue();
    q.enqueue(50);
    q.print_queue();

    // q.enqueue(50);
    // q.print_queue();

    try
    {
        cout << "now dequeue: " << endl;
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
        cout << "Got Value: " << q.dequeue() << endl;
        q.print_queue();
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }

    return 0;
}