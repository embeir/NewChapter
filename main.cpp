#include <iostream>

using namespace std;

void addition()
{
    typedef struct
    {
        int a;
        // int *ptr, *ptr1;
    } add;

    /* cin >> add.a;
    cin >> add.b; */

    add Broj = {11};

    add *brojevi = &Broj;

    cout << Broj.a << endl;
}

int main()
{

    addition();

    return 0;
};