#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    const int MAX=31;
    int n;
    cout<<"Kiek menuo turi dienu?";
    cin>>n;
    float temp[MAX];
    cout<<"Vidutines kiekvienos dienos temperaturos:\n";
    for(int i=0; i<n; i++)
    {
        temp[i]=-10+(rand()%200)/10.;
        cout<<i+1<<" dienos temp. vid.:"<<temp[i]<<endl;
    }
    float vid=0;//menesio temperaturu vidurkis
    for(int i=0; i<n; i++)
     vid+=temp[i];//randama temperaturu suma
    vid/=n;//temperaturu suma dalinam is dienu skaiciaus
    cout<<"Menesio temperaturu vidurkis:"<<fixed<<setprecision(2)<<vid<<endl; 
    system("pause");
    return EXIT_SUCCESS;
}