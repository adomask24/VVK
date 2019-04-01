#include <cstdlib>
#include <iostream>
#include <cmath>//matematiniu funkciju biblioteka
using namespace std;

int main(int argc, char *argv[])
{
    /* Pra?oma ivesti du sveikuosius skaicius a ir b
     bei operacijos simboli c. Pagal pateiktus 
     duomenis suformuojamas rei?kinys: 2*a c b = 
     ir pra?oma ivesti rezultata. 
     Programa patikrina, ar teisingai vartotojas 
     apskaiciavo rei?kinio reik?me ir apie tai 
     prane?a ekrane. */
    
    int a, b;
    char c;
    cout<<"Ivesk du sveikus skaicius:";
    cin>>a>>b;
    cout<<"Ivesk operacijos zenkla:";
    cin>>c;
    float rez, ats;
    //rez - apskaiciuos programa
    //ats - vartotojo ivestas atsakymas
    bool ar_rodyti=true;//tarkim kad reikia 
    //tolimesniu veiksmu
    switch (c)
    {
        case '+': {
                rez=2*a+b;
                break;
            }
        case '-':{
                rez=2*a-b;
                break;
            }
        case '*':{
                rez=2*a*b;
                break;
            }
        case '/':{
                rez=2.0*a/b;
                break;
            }
        default: {cout<<"Neteisingai ivestas operacijos zenklas:";
                    ar_rodyti=false;}
        }
 if (ar_rodyti){
    cout<<"Apskaiciuokite reiskinio reiksme:\n";
    cout<<"2 * "<<a<<" "<<c<<" "<<b<<" = ";
    cin>>ats;
    if (abs(rez-ats)<=0.0001) cout<<"Teisingai!!!\n";
    else cout<<"Neteisingai.\n";    
}
    system("pause");
    return EXIT_SUCCESS;
}