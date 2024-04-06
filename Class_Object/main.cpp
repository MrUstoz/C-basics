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

/*
class Person
{
public:
    string Fullname;
    string Address;
    int Age;


    Person(string f, string a, int e) : Fullname(f), Address(a), Age(e) {}

    void Print()
    {
        cout << Fullname << " " << Address << " " << Age << endl;
    }
};*/

class User
{
public:
    string Username;
    string Email;
    int Password;
};

class UserService{
public:
    list<User> Users;

    string AddUser(User newUser)
    {
        for(auto user : Users)
        {
            if(user.Username == newUser.Username)
            {
                return "Bunday foydalanuuvchi mavjud!";
            }

            if(user.Email == newUser.Email)
            {
                return "Bunday email orqali avval ro'yxatdan o'tilgan";
            }
        }

        Users.push_back(newUser);
        return "Successfully saved";
    }

    void GetUsers()
    {
        for(auto& user : Users)
        {
            cout << "Username: " << user.Username << ", Email: " << user.Email << ", Password: " << user.Password << "\n";
        }
    }
};





int main()
{
    cout << "Welcome to out!";
    UserService service;

    int n, p;
    string u, e;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n 1-Register\n 2-Get User\n 3-Close\n Input: ";
        cin >> n;
        if(n == 1)
        {
            cout << "\nUsername: ";
            cin >> u;
            cout << "\nEmail: ";
            cin >> e;
            cout << "\nPassword: ";
            cin >> p;

            User newUser;

            newUser.Username = u;
            newUser.Email = e;
            newUser.Password = p;

            string res = service.AddUser(newUser);
            cout << res;
        }
        else if(n == 2)
        {
            cout << "Users information: ";
            service.GetUsers();
        }
        else if(n == 3)
        {
            break;
        }
        else
        {
            cout << "Bunaqa bolim mavjud emas!\n";
        }
    }

    return 0;
    /*
    list<User> Users;

    User u1("foziljonov7", "abdulvosidfoziljonov55@gmail.com", 1234);
    User u2("FAA", "asjhbsabdah@gmail.com", 1234);

    Users.push_back(u1);
    Users.push_back(u2);

    for(auto& user : Users)
    {
        user.Print();
    }*/


    /*
    list<Person> person;

    Person p1("Abdulvosid Foziljonov", "Fergana", 19);
    Person p2("Nodirbek Abdulaxadov", "Fergana", 22);

    person.push_back(p1);
    person.push_back(p2);

    for(auto& people : person)
    {
        people.Print();
    }*/


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

   /* list<string> fruits {"Olma", "Nok", "Uzum"};

    list<bool> isPublic {true, false, false};

    cout << (isPublic.front() == true) << endl;

    cout << (isPublic.end() != isPublic.begin()) << endl;*/

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

    /*for(string fruit : fruits)
    {
        cout << fruit << endl;
    }*/

}
