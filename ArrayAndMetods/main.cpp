#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> d1 = {1111, 121, 37, 24};

    d1.push_back(5);

    for(double d2 : d1)
    {
        cout << d2 << "\t";
    }

    cout << "\n" << "Array size: " << d1.size() << endl;

    cout << "Array at: " << d1.at(3) << endl;

    d1.clear();

    cout << "Array empty: " << d1.empty() << endl;

    cout << "Array front: " << d1.front() << endl;

    d1.resize(10);
    for(int i = 5; i <= 10; i++)
    {
        d1[i] = i + 1;
    }

    for(double d3 : d1)
    {
        cout << d3 << "\t";
    }

    /*d1.pop_back();
    d1.pop_back();

    for(double d3 : d1)
    {
        cout << d3 << "\t";
    }
*/
    return 0;
}
