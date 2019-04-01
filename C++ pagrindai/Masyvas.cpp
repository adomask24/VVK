#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int MAX=50;
    int n;
    cout<<"Ivesk masyvo el. kieki (n<=50):";
    cin>>n;
    int mas[MAX];//masyvas
    //masyvo elementu ivedimas
    cout<<"Ivesk masyvo el.\n";
    for(int i=0; i<n; i++)
      {
            cout<<"ivesk "<<i+1<<" elementa:";
            cin>>mas[i];
        }
    //masyvo rodymas
    cout<<"Ivedei masyva:\n"; 
    for(int i=0; i<n; i++)
      cout<<mas[i]<<"; ";
    cout<<endl;   
    system("pause");
    return EXIT_SUCCESS;
}