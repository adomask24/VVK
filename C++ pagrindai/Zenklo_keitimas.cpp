#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
/*   7. Ivedama skaiciu seka, sekos pabaigos po?ymis
 - ivestas nulis. Nustatykite, kiek kartu ivedant 
 sekos narius keitesi sekos nario ?enklas.
*/
    int a;//sekos narys
    int n=0; //sekos nariu skaicius
    int b=0, zp=0;
    do{
        n++;
         cout<<"Jeigu nori baigti - ivesk 0\n";
         cout<<"Ivesk "<<n<<" sekos nari:";       
        if (n!=1) b=a;  //isidemim pries tai buvusia 
                       // a reiksme          
        cin>>a;
        if (a*b<0)//cia a ir b skirtingu zenklu
          zp++;
      
    }while(a!=0);//kol a nelygus 0 kartojam
    cout<<"Sekoje ivesta "<<--n<<" nariu.\n";
    cout<<"Zenklas keitesi:"<<zp<<" kartu.\n";
    system("pause");
    return EXIT_SUCCESS;
}
