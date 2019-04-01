#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


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
    // didziausio istrizainese paieska
    //ir keitimas vietomis
    int didpg, didsal, didpg_i, didsal_i, didsal_j;
    didpg=dm[0][0];
    didpg_i=0;
    didsal=dm[0][n-1];
    didsal_i=0;
    didsal_j=n-1;
    for(int i=0; i<n; i++)
    {
        if(didpg<dm[i][i]){
            didpg=dm[i][i];
            didpg_i=i;
        }
        if(didsal<dm[i][n-1-i]){
            didsal=dm[i][n-1-i];
            didsal_i=i;
            didsal_j=n-1-i;
        }
    }
    dm[didpg_i][didpg_i]=didsal;
    dm[didsal_i][didsal_j]=didpg;
    cout<<"Sukeitus elementus:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<dm[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}