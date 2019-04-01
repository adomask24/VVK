#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int did(int a, int b, int c);
void failas();

int main(int argc, char *argv[])
{
    srand(time(NULL));
    char ats;
    cout<<"Ar kurti nauja faila?(t/n)";
    cin>>ats;
    if (ats=='t'||ats=='T') failas();
    char vard[20];
    cout<<"Koks duomenu failo vardas?";
    cin>>vard;
    ifstream df(vard);
    ofstream rf("rez.txt");
    int x, y, z;
    while (!df.eof())
    {
        df>>x>>y>>z;
        rf<<did(x, y, z)<<endl;
    }
    
    df.close();
    rf.close();
    system("pause");
    return EXIT_SUCCESS;
}
// funkcijos veiksm? apra?as
int did(int a, int b, int c)
{
    int d;
    //if(a>b) d=a;
     //  else d=b;
    d=(a>b)?a:b;//  ?:
    if(d<c) d=c;    
    return d;   
}
//funkcija kurianti duomenu faila
void failas()
{
    char vardas[20];
    cout<<"Koks kuriamo failo vardas?";
    cin>>vardas;
    ofstream f (vardas);
    int e, s;
    cout<<"Kiek eiluciu?";
    cin>>e;
    cout<<"Po kiek skaiciu irasyti i eilute?";
    cin>>s;
    for(int i=0; i<e; i++)
    {
        for(int j=0; j<s; j++)
        {
            int a;
            a=-10+rand()%21;
            f<<"\t"<<a;
        }
        f<<endl;
    }
    f.close();
}