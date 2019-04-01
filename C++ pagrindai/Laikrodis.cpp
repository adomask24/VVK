#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
Laikrodzio rodoma laika, isreiksta valandomis minutemis ir sekundemis padidinkite 
viena sekunde. Parodykite pradini ir po sekundes gauta laika.
*/


int main()
{
    int v, m, s;
    cout<<"ivesk laikrodzio rodoma laika:";
    cin>>v>>m>>s;
    cout<<"Laikrodis rodo:\n";
    cout<<setfill('0')<<setw(2)<<v<<" : "<<setfill('0')<<setw(2)<<m;
    cout<<" : "<<setfill('0')<<setw(2)<<s<<endl;
    cout<<"po sekundes:\n";
    s++;
    if (s>59){
             s=0;
             m++;
             if (m>59){
                       m=0;
                       v++;
                       if(v>23) v=0;
                    }
                }
    cout<<setfill('0')<<setw(2)<<v<<" : "<<setfill('0')<<setw(2)<<m;
    cout<<" : "<<setfill('0')<<setw(2)<<s<<endl;
    system("pause");
    return EXIT_SUCCESS;
}




