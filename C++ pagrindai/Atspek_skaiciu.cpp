#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

/*
Sudarykite programa, kuri suzaistu su Jumis zaidima ?Atspek skaiciu?. 
Pasirinkite bet koki skaiciu, ir organizuokite jo spejima, po kiekvieno 
Jusu spejimo programa pasako, ar skaicius mazesnis, ar didesnis. 
Kai skaiciu atspesite, ekrane parodoma, kiek buvo spejimu.
*/


int main(int argc, char *argv[])
{
    srand (time(NULL));
    int n;
    n=rand()%100;
    int kiek=0;//spejimu kiekis
//    cout<<n<<endl;
    cout<<"Spek skaiciu nuo 0 iki 99  :";
    int spejimas;
  
    for(;;)
    {
    cin>>spejimas;
    kiek++;//kaupiam spejimu kieki
    if (n==spejimas){
        cout<<"ATSPEJAI\n";
        cout<<"Spejimu kiekis:"<<kiek<<endl;
        break;
        }//if
      else {
            cout<<"Neatspejai. ";
            if (n<spejimas)cout<<"Skaicius mazesnis\n";
              else cout<<"Skaicius didesnis\n";
            cout<<"Bandyk dar karta:\n";
        }
    }//for
    
    system("pause");
    return EXIT_SUCCESS;
}