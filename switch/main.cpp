#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Welcome to Shopping!" << endl;
    cout << "1.Asus TUF gaming" << endl;
    cout << "2.Asus Zen Book" << endl;
    cout << "3.HP" << endl;
    cout << "Noutbuklardan birini tanlang: ";
    cin >> a;

    switch(a)
    {
        case 1:
            cout << "Asus TUF gaming, narxi - 800$, ssd - 512GB, RUM - 8, VD Card - GTX 1050ti 4GB";
            break;
        case 2:
            cout << "Asus Zen Book, narxi - 600$, ssd - 512GB, RUM - 8, VD Card - NVidea 4GB";
            break;
        case 3:
            cout << "HP, narxi - 600$, ssd - 1TB, RUM - 8, VD Card - 4GB";
            break;
        default :
            cout << "Hozir bunday noutbuk yo'qku og'ayni !";
            break;
    }
    return 0;
}


//Tanlash operator
//switch, case, break, default
