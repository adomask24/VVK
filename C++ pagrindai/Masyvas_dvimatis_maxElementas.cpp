#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// raskite kiekvienos dvimacio masyvo eilutes didziausia elementa
int main()
{

	int dm[40][40];
	int n;
	cout<<"Iveskite masyvo eiluciu ir stulpeliu kieki: (n<=40)";
	cin>>n;
	srand(time(NULL));
	for(int i=0; i<n; i++)
	{
	 for(int j=0; j<n; j++)
	 	{
		 dm[i][j]=rand()%100;
	     cout<<dm[i][j]<<"\t";
	 }
	 cout<<endl;
    }
    int did;
    for(int i=0; i<n; i++)
    {
       did=dm[i][0];
       for(int j=1; j<n; j++)
       {
           if(did<dm[i][j]) did=dm[i][j];
       }
       cout<<i+1<<" eilutes didziausias el.: "<<did<<endl;
    }
    return 0;
}
