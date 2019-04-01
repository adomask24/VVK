#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
// duotas tekstas isrinkti skaicius ir juos sudeti.

const char VARDAS[]="tekstas.txt";
bool arSkaicius(char s[]){
  int n;
  n=strlen(s);
  bool yra=true;
  if(s[0]!='-'&&(s[0]<'0'||s[0]>'9'))yra=false;
  for(int i=1; i<n; i++)
        if(s[i]<'0'||s[i]>'9')yra=false;
  return yra;
}
int main()
{
    char x[50];
    int suma=0;
    ifstream f(VARDAS);
    if (f.fail())cout<<"nerastas failas";
    else{
        while(!f.eof()){
            f>>x;
            cout<<x<<" "<<atoi(x)<<endl;
            if(arSkaicius(x))suma+=atoi(x);
        }


    }
    cout<<"Faile esanciu skaiciu suma:"<<suma<<endl;
    f.close();
    return 0;
}