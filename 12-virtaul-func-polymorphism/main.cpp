#include <iostream>
using namespace std;

class Plugin
{
public:
    virtual void apply_filter(int a[5][5]) = 0;
};

class MakeItWhite : public Plugin
{
public:
    void apply_filter(int a[5][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {

                a[i][j] = 255;
            }
        }
    }
};

class MakeItBlack : public Plugin
{
public:
    void apply_filter(int a[5][5])
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {

                a[i][j] = 0;
            }
        }
    }
};

void init_matrix(int a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            a[i][j] = 0;
            a[i][j] = i * j;
        }
    }
}

void output_matrix(int a[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cout << a[i][j] << " ";
        }

        cout << endl;
    }
}

Plugin *select_plugin()
{
    string plugin_name = "mib";
    Plugin *p;
    if (plugin_name == "miw")
    {
        p = new MakeItWhite;
    }
    else
    {
        p = new MakeItBlack;
    }

    return p;
}

int main()
{
    int pic[5][5];
    init_matrix(pic);
    cout << "Initialized values of pic: " << endl;
    output_matrix(pic);
    Plugin *p;
    p = select_plugin();
    p->apply_filter(pic);
    cout << "After applying filter" << endl;
    output_matrix(pic);
    return 0;
}