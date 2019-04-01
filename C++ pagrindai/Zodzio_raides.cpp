#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
    const int N=20;
    char z[N];
    cout<<"Iveskite zodi:";
    cin>>z;
    cout<<"Ivestas zodis:"<<z<<endl;
    // Nustatykite, kiek zodyje a raidziu?
    int m;
    m=strlen(z);
    cout<<"Duotame zodyje yra "<<m<<" simboliu.\n";
    int ra;//raidziu a kiekis
    ra=0;
    
    for(int i=0; i<m; i++)
      if(z[i]=='a'||z[i]=='A')
        ra++;
    if (ra==0)    
        cout<<"Raidziu A(a) zodyje nera.\n";
        else {
            cout<<"Zodyje yra "<<ra<<" A(a) raidziu.\n";
         //nustatysime kur stovi ieskomos raides
         for(int i=0; i<m; i++)
           if(z[i]=='a'||z[i]=='A')
             cout<<" A(a) yra:"<<i+1<<"-a"<<endl;   
            
        }
    system("pause");
    return EXIT_SUCCESS;
}