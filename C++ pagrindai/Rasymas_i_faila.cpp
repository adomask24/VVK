#include <cstdlib>
#include <iostream>
#include <fstream>//darbui su failais
#include <ctime>//atsitiktiniu sk generavimui

using namespace std;

int main(int argc, char *argv[])
{
    srand (time(NULL));
    const int n=300;
    ofstream f("skaiciai.txt");
    for (int i=1; i<=n; i++)
    {
       int a;
       a=rand()%100;
       f<<a<<" ";
       if (i%10==0) f<<endl;// sugeneravus 10 skaiciu pereinam i nauja eilute
    }
    f.close();//uzdarom faila
    system("pause");
    return EXIT_SUCCESS;
}