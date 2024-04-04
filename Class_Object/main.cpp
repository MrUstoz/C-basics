#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

/*
class Animal
{
public:
    string Name;

    void GetAnimal()
    {
        cout << " ";
    };

    virtual void SetName(string name)
    {
        Name = name;
        cout << "animal: " << name << endl;
    }

    virtual void GetVoice(string voice)
    {
        cout << "Voice: " << voice << endl;
    }
};

class Dog : public Animal
{
public:
    void SetName(string name) override
    {
        cout <<"animal: " << name << endl;
    }

    void GetVoice(string voice) override
    {
        cout << "voice: " << voice << endl;
    }
};*/

int main()
{
    /*Animal animal;
    animal.SetName("Cat");
    animal.GetVoice("Miow");


    Dog dog;
    dog.SetName("Dog");
    dog.GetVoice("Wow");*/

    //30 20 10
    /*list<int> sonlar;
    int res; //0

    sonlar.push_front(10);
    sonlar.push_back(50);
    sonlar.push_back(20);

    sonlar.remove(10);
    sonlar.insert(sonlar.end(), 10);
    sonlar.resize(10);
    sonlar.sort();

    for(int j : sonlar)
    {
        res += j;
        cout << j << endl;
    }

    cout << "Listdagi qiymatlar yigindisi: " << res;*/


    /*
    for(int i : sonlar)
    {
        if(i == 50)
        {
            cout << "Mavjud: " << i;
        }
        else
        {

        }
    }
*/

    list<string> fruits {"Olma", "Nok", "Uzum"};

    list<bool> isPublic {true, false, false};

    cout << (isPublic.front() == true) << endl;

    cout << (isPublic.end() == isPublic.begin()) << endl;

    /*for(bool is : isPublic)
    {
        if(!is == true)
        {
            cout << is << endl;
        }
        else
        {

        }
    }*/

    for(string fruit : fruits)
    {
        cout << fruit << endl;
    }

    return 0;
}
