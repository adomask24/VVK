#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

void masyvas(int mas[], int &n);
void rodykMasyva(int mas[], int n);
int pasikartoja(int mas[], int n, int xx);

int main(int argc, char *argv[])
{
//   1. Para?ykite programa, kuri sudarytu masyva ir u?pildytu ji reik?memis i? tekstinio failo.
// 2. Nustatykite, kiek kartu masyve kartojasi skaicius x. 
    const int MAX=500;
    int a[MAX];
    int nn;
    masyvas(a, nn);
    if (nn!=-1){
        cout<<"Sudarytas masyvas:";
        rodykMasyva(a, nn);
        //2 uzduotis
        int x, k;
        cout<<"Ivesk ieskoma reiksme:";
        cin>>x;
        k=pasikartoja(a, nn, x);
        if (k==0)cout<<"Reiksmes masyve nera.";
          else cout<<"Reiksme "<<x<<" kartojasi "<<k<<" kartu.";
        cout<<endl;
        }

    system("pause");
    return EXIT_SUCCESS;
}
void masyvas(int mas[], int &n)
{
    ifstream f("D:\\duota.txt");
    n=0;
    if (f.fail()) {n=-1;
                   cout<<"Nerastas failas";
                }
    else {
    while(!f.eof())
    {
        f>>mas[n];
        n++;
        }
    f.close();
    }
    }
 //------------------
 void rodykMasyva(int mas[], int n)
 {
    for(int i=0; i<n; i++)
     cout<<mas[i]<<"; ";
    cout<<endl<<"Masyve elementu yra:"<<n<<endl;    
    }   
//    --------------------------------
int pasikartoja(int mas[], int n, int xx)
{
    int kiek=0;
    for(int i=0; i<n; i++)
      if(mas[i]==xx) kiek++;
    return kiek;
    }