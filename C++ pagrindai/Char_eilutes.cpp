#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    char eil[50];
    int n;
    cout<<"Ivesk eilute:";
    cin.getline(eil, 50);// nuskaito eilute su tarpais
    int kiek=0;//zodziu pasidedanciu as- kiekis
    //patikrinsim pirma zodi
    if ((eil[0]=='a'||eil[0]=='A')&&(eil[1]=='s'||eil[1]=='S'))
    kiek++;
    n=strlen(eil);//suskaiciujam eilutes simboliu kieki
    for(int i=0; i<n-2; i++)
       {
         if (eil[i]==' '&&
            (eil[i+1]=='a'||eil[i+1]=='A')&&
            (eil[i+2]=='s'||eil[i+2]=='S'))
            kiek++;
        }
    cout<<"Ivesta simboliu eilute:"<<eil<<endl;
    cout<<"Zodziu prasidedanciu as- skaicius:"<<kiek<<endl;
    system("Pause");
    return EXIT_SUCCESS;
}