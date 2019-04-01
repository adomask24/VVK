#include <cstdlib>
#include <iostream>
#include <iomanip>// cout isvesties formatai
#include <stdio.h>//tam kad naudotume printf

using namespace std;
/*uzduotis:
    Iveskite sveikaji skaiciu n, realuji skaiciu x
    ir smboli a. Parasykite programa, kuri parodytu
    ivestuosius duomenis skirtingose eilutese.
    */
int main()
{
    int n; //sveikas skaicius
    float x; //realusis skaicius
    char a; //simbolis
    cout << "Ivesk sveika skaiciu:";//pranesimas ekrane
    cin >> n; //sveikojo skaiciaus ivestis
    cout << "Ivesk realu skaiciu:";
    cin >> x; //realaus skaiciaus ivestis
    cout << "Ivesk simboli:";
    cin >> a; //simbolio ivestis
    cout<<"ivestas sveikas skaicius \n"<<n<<endl;
    // \n arba endl- nukelia i nauja eilute
    cout<<"ivestas realus skaicius \n"<<x<<endl;
    cout<<"ivestas simbolis \n"<<a<<endl;
    system("pause");//programos rezultatu uzlaikymas
    return EXIT_SUCCESS;
}
