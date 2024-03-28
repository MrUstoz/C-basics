#include <iostream>

using namespace std;
/*
enum HaftaKunlari //enum kalit sozi Nomi
{
    Dushanba,    //enum propertylari
    Seshanba,
    Chorshanba,
    Payshanba,
    Juma,
    Shanba,
    Yakshanba
};

string HaftaKuniRaqamBilanTopish(int kun)
{
    if(kun == HaftaKunlari::Dushanba)
    {
        return "Dushanba";
    }
    else if(kun == HaftaKunlari::Seshanba)
    {
        return "Seshanba";
    }
    else if(kun == HaftaKunlari::Chorshanba)
    {
        return "Chorshanba";
    }
    else if(kun == HaftaKunlari::Payshanba)
    {
        return "Payshanba";
    }
    else if(kun == HaftaKunlari::Juma)
    {
        return "Juma";
    }
    else if(kun == HaftaKunlari::Shanba)
    {
        return "Shanba";
    }
    else if(kun == HaftaKunlari::Yakshanba)
    {
        return "Yakshanba";
    }
}

enum Fasl
{
    Qish = 1,
    Bahor,
    Yoz,
    Kuz
};


string Faslni_Topish(int fasl)
{
    switch(fasl)
    {
        case Fasl::Qish: return "Qish fasli sovuq"; break;
        case Fasl::Bahor: return "Bahor o'zgacha chiroy"; break;
        case Fasl::Yoz: return "Yoz jazirama issiq"; break;
        case Fasl::Kuz: return "Kuz mevalar fasli"; break;
    }
}*/



class My
{
public:

    static int AddNumber(int a, int b)
    {
        return a + b;
    }

    static int TwoAddNumbers(int a, int b, int c)
    {
        return a + b + c;
    }
};

class My2
{
public:
    int AddNumber(int a, int b)
    {
        return a + b;
    }
};

enum Course
{
    Dasturlash,
    Dizayn,
    Mobilograf,
    SMM
};

string GetCourse(int n)
{
    switch(n)
    {
        case Course::Dasturlash: return ".NET, C++, Python, PHP"; break;
        case Course::Dizayn: return "3D design, Web design, Graphis design"; break;
        case Course::Mobilograf: return "Capcut, VN"; break;
        case Course::SMM: return "Targer, Instagram..."; break;
    }
}

int main()
{
    int n;

    cin >> n;

    string result = GetCourse(n);
    cout << result;
    return 0;
}
