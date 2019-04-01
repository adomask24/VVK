#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const char VARDAS[]="tekstas.txt";
const char REZ[]="rezultatai.txt";

int zodziuSK(string s){
    int n, k(0);
    n=s.size();
    for(int i=0; i<n; i++)
        if(s[i]==' ')k++;
    return (k+1);
}
//is duoto teksto pasalinti eilutes, kuriose yra
//lyginis zodziu skaicius
int main()
{
    ifstream f(VARDAS);
    ofstream rez(REZ);
    if (f.fail()) cout<<"Nerastas failas";
    else{
        string eil;
        while(!f.eof()){
            getline(f, eil);
            if (eil!="")//jeigu eil netuscia
            {
                cout<<zodziuSK(eil)<<":"<<eil<<endl;
            if(zodziuSK(eil)%2!=0) {
                rez<<eil<<endl;
            }
            }
        }
    }
    f.close();
    rez.close();
    return 0;
}