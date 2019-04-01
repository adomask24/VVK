#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
/*
Uzduotis:
    4. Para?ykite programa, kuri ivesta realuji 
    skaiciu atspausdintu pinigine forma. 
    Pvz.: ivedus 16.24, programa i ekrana 
    i?veda 16 Eur 24 cnt.
    */
int main(int argc, char *argv[])
{
    float suma;
    cout<<"Ivesk pinigu suma:";
    cin>>suma;
    cout<<"suma :"<<suma<<endl;
    int eur;
    eur=(int)suma;// atskiriame sveika skaiciaus dali
    suma=round((suma-eur)*100);// atskiriame centus
    cout<<eur<<" Eur "<<suma<<" cnt"<< endl;
    system("pause");
    return EXIT_SUCCESS;
}