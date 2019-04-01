#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;
//duomenu nuskaitymas i dvimati masyva

int main(int argc, char *argv[])
{
    ifstream duom("matrica.txt");
    int n, m;
    duom>>n>>m;
    int a[n][m];
    //masyvo nuskaitymas is failo
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      duom>>a[i][j];
      
    //masyvo rodymas
    cout<<"Duota ["<<n<<"x"<<m<<"] matrica:\n";  
    for (int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
         cout<<a[i][j]<<"\t";
        cout<<endl; 
    }
    
    duom.close();
    system("pause");
    return EXIT_SUCCESS;
}