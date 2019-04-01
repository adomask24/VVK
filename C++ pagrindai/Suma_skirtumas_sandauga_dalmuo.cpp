#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
/*  
?veskite du sveikus skai?ius. Apskai?iuokite j? sum?, 
skirtum?, sandaug?, dalmen? ir dalybos liekan?. 
Ekrane rezultatus parodykite eilut?mis, pvz.:

2 + 3 = 5
2 - 3 = -1
2 * 3 = 6
2 / 3 = 0
2 padalinus i? 3, liekana  lygi 2.
  */
    int a, b;//du sveiki skai?iai
    cout<<"Iveskite du sveikus skaicius:";
    cin>>a>>b;
    int suma, sand, skirt, dal, liek;
    suma=a+b;
    cout<<a<<" + "<<b<<" = "<<suma<<endl;    
    skirt=a-b;
    cout<<a<<" - "<<b<<" = "<<skirt<<endl;
    sand=a*b;
    cout<<a<<" * "<<b<<" = "<<sand<<endl;    
    dal=a/b;
    liek=a%b;
    cout<<a<<" / "<<b<<" = "<<dal<<endl;
    cout<<a<<" dalijant is "<<b<<" liekana yra "<<liek<<endl;
    system("pause");
    return EXIT_SUCCESS;
}