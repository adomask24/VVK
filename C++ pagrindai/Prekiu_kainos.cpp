#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void masyvas(float mas[], int &n);
void rodykMasyva(float mas[], int n);
double vidurkis(float mas[], int n);

int main(int argc, char *argv[])
{
    const int MAX=500;
    float a[MAX];
    int nn;
    masyvas(a, nn);
    if (nn!=-1){
        cout<<"Sudarytas masyvas:\n";
        rodykMasyva(a, nn);
        /*
        4. Masyve saugomos prekiu kainos. Prekes, kuriu kainos mazesnes
         uz visu prekiu vidurki pabranginamos 10 procentu. 
         Apskaiciuokite vidutine prekiu kaina po pabrangimo.
        */
        double vid1, vid2;
        vid1=vidurkis(a, nn);
        cout<<"Prekiu kainu vidurkis iki pabrangimo:";
        cout<<fixed<<setprecision(2)<<vid1<<endl;
        //pabranginimas visu prekiu, kuriu kaina <vid1
        for(int i=0; i<nn; i++)
          if (a[i]<vid1) a[i]=a[i]+0.1*a[i];
        cout<<"Prekiu kainos po pabrangimo:"<<endl;
        rodykMasyva(a, nn);
        vid2=vidurkis(a, nn);
         cout<<"Prekiu kainu vidurkis po pabrangimo:";
        cout<<fixed<<setprecision(2)<<vid2<<endl;
        
        
        cout<<endl;
        }

    system("pause");
    return EXIT_SUCCESS;
}
void masyvas(float mas[], int &n)
{
    ifstream f("D:\\duota.txt");
    n=0;
    if (f.fail()) {n=-1;
                   cout<<"Nerastas failas";
                }
    else {
    while(!f.eof())
    {
        f>>mas[n];
        n++;
        }
    f.close();
    }
    }
 //------------------
 void rodykMasyva(float mas[], int n)
 {
    for(int i=0; i<n; i++)
     cout<<fixed<<setprecision(2)<<mas[i]<<"\t";
    cout<<endl<<"Masyve elementu yra:"<<n<<endl;    
    }   
double vidurkis(float mas[], int n)
{
    double vid=0;
    for(int i=0; i<n; i++)
      vid=vid+mas[i];
    vid=vid/n;
    return vid;
    }