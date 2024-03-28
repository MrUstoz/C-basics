#include <iostream>

using namespace std;

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
};

int main()
{
    Animal animal;
    animal.SetName("Cat");
    animal.GetVoice("Miow");


    Dog dog;
    dog.SetName("Dog");
    dog.GetVoice("Wow");

    return 0;
}
