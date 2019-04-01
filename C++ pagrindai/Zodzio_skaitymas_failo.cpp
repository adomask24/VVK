#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool raide_a(string s)
{
    int n;
    n=s.size();//randam string eilutes ilgi
    bool yra=false;
    for(int i=0; i<n; i++)
     if(s[i]=='a'||s[i]=='A')
       yra=true;
    return yra;   
}

int main(int argc, char *argv[])
{
    const char vardas[]="eiles.txt";
    ifstream f(vardas);
    string z[100];
    int i=0;//zodziu skaicius
    // Nustatysime kiek zodziu turi raide a
    int kiek=0;//zodziu su raide a skaicius
    while (!f.eof())
    {
        i++;
        f>>z[i-1];
        if (raide_a(z[i-1]))kiek++;
        cout<<i<<". "<<z[i-1]<<endl;
    }
    
    f.close();
    cout<<"Tekste yra "<<kiek<<" zodziu su raide a.\n";
    system("pause");
    return EXIT_SUCCESS;
}