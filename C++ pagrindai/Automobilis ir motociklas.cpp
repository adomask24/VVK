#include <cstdlib>
#include <iostream>

using namespace std;
 /*
 Automobilis per t1 valandu nuvaziavo s1 kilometru, o motociklas 
 per t2 valandu - s2 kilometru. Nustatykite, kuri transporto 
 priemone virsijo leistin? kelyje greiti v0 km/h.
 */
int main()
{
    float s1, s2, t1, t2, v0, v1, v2;
    cout<<"Koks automobilio numaziuotas kelias? ";
    cin>>s1;
    cout<<"per kiek laiko? ";
    cin>>t1;
    cout<<"Koks motociklo numaziuotas kelias? ";
    cin>>s2;
    cout<<"per kiek laiko? ";
    cin>>t2;
    cout<<"Koks leistinas vidutinis greitis? ";
    cin>>v0;
    v1=s1/t1;
    v2=s2/t2;
    if (v1<=v0&&v2<=v0) cout<<"Greicio nevirsijo niekas.";
    else if (v1>v0&&v2>0) cout<<"Greiti virsijo abu.";
          else if (v1>v0) cout<<"Greiti virsijo automobilis.";
                  else cout<<"Greiti virsijo motociklas.";
             
    cout<<endl;
    system("pause");
    return EXIT_SUCCESS;
}