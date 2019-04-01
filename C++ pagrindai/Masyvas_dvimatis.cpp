#include <cstdlib>
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    //dvimacio masyvo sugeneravimas
    // ir irasymas i faila
    ofstream fv("matrica.txt");
    srand(time(NULL));
    int mas[20][20];
    cout<<"Kiek masyve eiluciu? (ne daugiau 20)";
    int n,m;
    cin>>n;//eiluciu skaicius
    cout<<"Kiek masyve stulpeliu? (ne daugiau 20)";
    cin>>m;//stulpeliu skaicius
    fv<<n<<"\t"<<m<<endl;
    //dvimacio masyvo ivedimas
    for(int i=0;i<n; i++)
    {
      for (int j=0; j<m; j++)
        {
          mas[i][j]=rand()%100;
          fv<<mas[i][j]<<"\t";
        }
        if (i!=n-1)fv<<endl;
    }
    fv.close();
    system("pause");
    return EXIT_SUCCESS;
}