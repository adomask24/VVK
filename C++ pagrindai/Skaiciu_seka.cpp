#include <cstdlib>
#include <iostream>

using namespace std;
/*
 Ivedama skaiciu seka, sekos ivedimo pabaiga - nulis.
  Sudaryti programa, kuri atskirai kauptu ivedamu teigiamu skaiciu 
  suma ir neigiamu skaiciu sandauga. Pranesti, jeigu nebuvo ivesta
  teigiamu ar neigiamu skaiciu, atitinkamai sumos arba 
  sandaugos tokiu atveju rodyti nereikia.
*/

int main(int argc, char *argv[])
{
    int a;//sekos  narys
    int suma=0, sand=1, i=1;
    int kn=0;// neigiamu sk kiekis
    for (;;)
    {
        cout<<"Ivesk "<<i<<" sekos nari:";
        cin>>a;
        if (a>=0) 
        suma+=a;// suma=suma+a;
        else {
            sand = sand * a;
            kn++;
            }
        if (a==0) break;
    }
    if (suma==0) cout<<"Teigiamu nera.\n";
    else cout<<"Teigiamu nariu suma:"<<suma<<endl;
    if (kn==0) cout<<"Neigiamu nera.\n";
    else cout<<"Neigiamu nariu sandauga:"<<sand<<endl;
    
    system("pause");
    return EXIT_SUCCESS;
}