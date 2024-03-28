#include <iostream>

using namespace std;

int main()
{
    //takrorlash operatorlari
    //for, while, do-while

    /*string fruits[] = {"olma", "uzum", "nok"};

    for(auto f : fruits)
    {
        cout << f;
    }*/

    /*int i = 0;
    while(i < 10)
    {
        i++;
        if(i % 2 == 1)
        {
            cout << i << endl;
        }
    }*/


    /*int n, m;
    cin >> n >> m;
    do{
        if(n % 5 == 0)
        {
            cout << n << " ";
        }
        n++;
    }while(n <= m);*/



    //Masala 2 ta son kiritiladi osha sonlardan qaysi biri
    //katta bolsa osha sondan kichkinasigacha bolgan barcha
    //sonlar console qaytarilsin


    int n, m;
    cin >> n >> m;
    if(n > m)
    {
        for(int i = n; i > m; i--)
        {
            cout << i << endl;
        }
    }
    else
    {
        for(int j = m; j > n; j--)
        {
            cout << j << endl;
        }
    }

    return 0;
}
