#include <iostream>
#include <list>

using namespace std;

int main()
{
    std::list<int> numbers; //list hosil qilish
    std::list<int> kvadrat_sonlar;

    for(int i = 10; i < 13; i++)
    {
        kvadrat_sonlar.insert(kvadrat_sonlar.end(), i * i); //listga oxiridan malumot qoshish
    }

    for(int i = 0; i < 10; i++)
    {
        numbers.insert(numbers.begin(), i * 5); // listga boshidan malummot qoshish
    }

    numbers.insert(numbers.end(), 40);


    numbers.unique(); //listda bir hil sonlarni bittasini qoldirish
    numbers.sort(); //list ketma-ketlik boyicha sortlash

    numbers.pop_back(); //oxiridan malumot ochirish
    numbers.pop_front(); //bshidan malumot ochirish

    cout << numbers.size() << endl; //nechta malumot mavjudligini qaytarish

    numbers.merge(kvadrat_sonlar); //2-ta listni bir biriga qoshish

    for(int i : numbers)
    {
        cout << i << endl;
    }






    return 0;
}
