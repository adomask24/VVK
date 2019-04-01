#include <cstdlib>
#include <iostream>

using namespace std;
/* Uzduotis
    3.Duotas trizenklis skaicius. Prasykite programa
     randancia skaiciaus skaitmenis.
*/
int main(int argc, char *argv[])
{
    int n;
    cout<<"Ivesk trizenkli skaiciu:";
    cin>>n;
    int a, b, c;
    a=n/100; // pirmas skaitmuo
    b=(n/10)%10;
    c=n%10;
    cout<<"Pirmas skaitmuo: "<<a<<endl;
    cout<<"Antras skaitmuo: "<<b<<endl;
    cout<<"Trecias skaitmuo: "<<c<<endl;
    system("pause");
    return EXIT_SUCCESS;
}