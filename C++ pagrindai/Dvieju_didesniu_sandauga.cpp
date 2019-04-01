#include <cstdlib>
#include <iostream>

using namespace std;
/*
Duoti trys sveikieji skaiciai a, b, c. Raskite dvieju didesniu sandauga.

*/


int main(int argc, char *argv[])
{
    int a, b, c, m;
    cout<<"Ivesk tris skaicius:";
    cin>>a>>b>>c;
    if (a==b&&b==c || a==b&&b<c || a==c&&a<b || b==c&&c<a)
     cout<<"Dvieju didesniu sandaugos rasti neimanoma\n";
     else{
            if(a<b)m=a; else m=b;
//            m=(a<b)?a:b;
            if(c<m)m=c;
            int dd;
            dd=(a*b*c)/m;
            cout<<"Dvieju didesniu sandauga:"<<dd<<endl;
        }    
        
    system("pause");
    return EXIT_SUCCESS;
}