#include <iostream>
using namespace std;

class Student
{
private:
    int id;

public:
    static int next_id;
    static int inc_next_id()
    {
        next_id++;
        return next_id;
    }

    Student()
    {
        id = Student::inc_next_id();
    }

    int get_id()
    {
        return id;
    }
};

// initialize it here
int Student::next_id = 0;

int fib(int n)
{
    static int count = 0;

    if (n == -1)
    {
        return count;
    }

    count += 1;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

class Employee
{
protected:
    int payrate;

public:
    void set_payrate(int payrate)
    {
        if (payrate > 14)
        {
            this->payrate = payrate;
        }
        else
        {
            cout << "Payrate is not acceptable not setting..." << endl;
        }
    }

    int get_payrate()
    {
        return payrate;
    }

    friend void access_payrate_directly(Employee e);
};

class Faculty : public Employee
{
public:
    void set_payrate(int payrate)
    {
        if (payrate > 25)
        {
            this->payrate = payrate;
        }
        else
        {
            cout << "Payrate is not acceptable not setting..." << endl;
        }
    }

    int get_payrate()
    {
        return payrate;
    }
};

void access_payrate_directly(Employee e)
{
    cout << "Payrate: " << e.payrate << endl; // horrible idea
}

int main()
{
    Student s1;
    cout << "id: " << s1.get_id() << endl;
    Student s2;
    cout << "id: " << s2.get_id() << endl;

    // fib(1);
    // cout << "Count: " << fib(-1) << endl;

    fib(15);
    cout << "Count: " << fib(-1) << endl;

    Employee emp;
    emp.set_payrate(15);
    cout << "Current payrate: " << emp.get_payrate() << endl;
    emp.set_payrate(11);
    cout << "Current payrate: " << emp.get_payrate() << endl;
    emp.set_payrate(16);
    cout << "Current payrate: " << emp.get_payrate() << endl;

    cout << "Creating instance of faculty " << endl;
    Faculty f;
    f.set_payrate(20);
    cout << "Current payrate: " << f.get_payrate() << endl;

    f.set_payrate(23);
    cout << "Current payrate: " << f.get_payrate() << endl;

    f.set_payrate(29);
    cout << "Current payrate: " << f.get_payrate() << endl;

    access_payrate_directly(emp); // again friend function is a horrible idea it breaks abstraction
    return 0;
}
