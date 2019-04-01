#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
/*
Para?ykite funkcij?, kuri nuskaito duomen? fail? ir randa,
 kiek faile lygini? skai?i? ir kokia did?iausio lyginio
 skai?iaus reik?m?. U?duotyje realizuokite funkcij? gr??inan?i?
 ie?komas reik?mes per parametrus.
*/

void SukurtiFaila();
void Lyginiai(int &kiek, int &did);

int main()
{
    srand(time(NULL));
    SukurtiFaila();
    int k, d;
    Lyginiai(k, d);
    if (k!=0)
        cout<<"Lyginiu skaiciu faile yra:"<<k<<" didziausias:"<<d<<endl;
    else cout<<"Lyginiu faile nera.\n";
    system("pause");
    return 0;
}
void SukurtiFaila()
{
    ofstream f;
    f.open("duotas.txt");
    cout<<"Kiek skaiciu irasyti i faila:";
    int n, a;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
       a=rand()%1000;
       f<<"\t"<<a;
       if(i%10==0&&i!=n)f<<endl;
    }

    f.close();
}
void Lyginiai(int &kiek, int &did)
{
    ifstream fv;
    kiek=0;
    fv.open("duotas.txt");
    if(fv.fail()) cout<<"Nerastas duomenu failas";
    else{
            int a;
        while (!fv.eof())//kol ne failo pabaiga
        {
            fv>>a;//skaitom skaiciu is failo
            if(a%2==0)kiek++;//skaiciujame kiek yra lyginiu
            if (kiek==1)did=a;//pirma surasta lygini imame kaip did
            if (kiek>1 && a%2==0)
                if(a>did) did=a;//ieskome didziausio lyginio
        }
    }
    fv.close();
}