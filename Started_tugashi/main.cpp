#include <iostream>

using namespace std;


int perimatr(int a, int b)
{
    return (a + b) * 2;
}


int kvadrat(int a)
{
    return a * 4;
}

int main()
{
    int a, b;

    cout<<"Input: ";
    cin >> a >> b;

    cout << perimetr(a, b);
    return 0;
}



