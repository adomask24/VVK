#include <cstdlib>
#include <iostream>
#include <fstream>//darbui su failais

using namespace std;

int main(int argc, char *argv[])
{
    int a, k=0;
    ifstream f("skaiciai.txt");
    while (!f.eof())
    {
        f>>a;
        k++;
        cout<<"\t"<<a;
        if (k%8==0) cout<<endl;
        
    }
    f.close();//uzdarom faila
    cout<<endl;
    system("pause");
    return EXIT_SUCCESS;
}