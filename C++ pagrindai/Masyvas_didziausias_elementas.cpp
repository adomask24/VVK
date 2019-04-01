#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

void masyvas(int mas[], int &n);
void rodykMasyva(int mas[], int n);
void maksimalus(int mas[], int n, int &max, int &nr);

int main(int argc, char *argv[])
{
//   1. Para?ykite programa, kuri sudarytu masyva ir u?pildytu ji reik?memis i? tekstinio failo.
// 2. Nustatykite, kiek kartu masyve kartojasi skaicius x. 
    const int MAX=500;
    int a[MAX];
    int nn;
    masyvas(a, nn);
    if (nn!=-1){
        cout<<"Sudarytas masyvas:\n";
        rodykMasyva(a, nn);
        //3 uzduotis
        //Raskite didziausia masyvo elementa ir jo numeri masyve.
        int did, didnr;
        maksimalus(a, nn, did, didnr);
        cout<<"Didziausias masyvo elementas:"<<did<<endl;
        cout<<"Jo numeris masyve:"<<didnr<<endl;
        
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
void maksimalus(int mas[], int n, int &max, int &nr)
{
    max=mas[0];
    nr=0;
    for(int i=1; i<n; i++)
     if(mas[i]>max){
            max=mas[i];
            nr=i;
            }
}