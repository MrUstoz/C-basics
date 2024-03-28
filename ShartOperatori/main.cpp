#include <iostream>

using namespace std;

int main()
{
    //Masala : Bitta son kiritiladi juft yoki toq
    //ekanligini aniqlesilar, agar son juft boledigon bolsa
    //kvadrati qaytarilsin, agar toq son kubi qaytarilsin

    int s;
    cout << "Son kiriting: ";

    cin >> s;
    if(s % 2 == 0)
    {
        cout << s * s;
    }
    else
    {
        cout << s * s * s;
    }
    /*int d;
    cout << "Son kiriting: ";
    cin >> d;
    if(d % 2 == 0)
    {
        cout << d << " Juft son";
    }
    else
    {
        cout << d << " Toq son";
    }*/




    /*string t = "Hello World";
    string t1, t2, res; // string t1, t2;
    cin >> t1 >> t2; // t1 = Hello, t2 = World
    res = t1 + " " + t2; // Hello World
    if(res != t) // Hello World != Hello World
    {
        cout << true;
    }
    else
    {
        cout << false;
    }*/



    /*int a;
    cout << "Son kiriting: ";
    cin >> a;

    if(a > 100)
    {
        cout << "100 dan katta ";
    }
    else if(a == 100)
    {
        cout << "100 ga teng";
    }
    else
    {
        cout << "100 dan kichik ";
    }*/
    return 0;
}
