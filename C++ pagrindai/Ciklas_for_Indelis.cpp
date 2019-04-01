#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float pr, augimas; 
    const int p=5;
    int m;
    cout<<"Kokio dyd=io pradinis indelis?";
    cin>>pr;
    augimas=pr;
    for(m=1; augimas<2*pr ;m++)
    {
        augimas=augimas+augimas*p/100;
        }
    cout<<"Po "<<--m<<" metu idelis padvigubes.\n";
    system("pause");
    return EXIT_SUCCESS;
}