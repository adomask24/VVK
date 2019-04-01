#include <cstdlib>
#include <iostream>

using namespace std;

/*
Parasykite dvi funkcijas: viena naturaliojo skaiciaus 
skaitmenu sumai, kita naturaliojo skaiciaus skaitmenu 
sandaugai skaiciuoti. Parasykite programa, kuri ekrane 
parodytu visus trizenklius skaicius, kuriu skaitmenu 
suma didesne uz sandauga. Kiek tokiu skaiciu yra?
*/
int sksuma(int x);
int sksan(int x);

int main(int argc, char *argv[])
{
    int kiek=0;
    cout<<"Ieskomi 3-zenkliai sk, kuriu sk suma > uz sk sandauga.\n";
    for(int tr=100; tr<=999; tr++)
     {     
     if ( sksuma(tr) > sksan(tr) )
        {
            cout<<"\t"<<tr;
            kiek++;
        }//if
    }//for
    if(kiek==0) cout<<"Tokiu nera.";
     else cout<<"Tokiu sk yra:"<<kiek;
    cout<<endl;    
    system("pause");
    return EXIT_SUCCESS;
}
//
int sksuma(int x){
  int sum=0;//suma
  int sk;//skaitmuo
  while (x!=0)
  {
    sk=x%10;//randam paskutini skaiciaus skaitmeni
    sum+=sk;//kaupiam suma
    x=x/10;  //is x atmetam paskutini skaitmeni
    }
    return sum;
}
int sksan(int x){
  int san=1;//suma
  int sk;//skaitmuo
  while (x!=0)
  {
    sk=x%10;
    san*=sk;
    x=x/10;        
    }
    return san;
}
