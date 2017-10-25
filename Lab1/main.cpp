//fie un numar natural dat. sa se calculeze produsul p al tuturor factorilor proprii ai lui n

#include <iostream>
#include <assert.h>
using namespace std;

// CITIREA
void readData(int &n)
{
    cout<<"Dati numarul n= ";
    cin>>n;
}
// AFISAREA
void printData(int n)
{
    cout<<n;
}
// PRODUSUL FACTORILOR PROPRII
int produs(int n)
{
    // Functia calculeaza produsul div proprii a lui n
	// In: un nr nat n
	// Out: produsul div proprii ai lui n
    int p=1;

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            p=p*i;
        }
    }
    return p;
}
// TESTAREA PRODUSULUI
void TestProdus()
{
    assert(produs(12)==144);
    assert(produs(13)==1);
    assert(produs(8)==8);
    cout<<"Teste ok";
}
// MAIN
int main()
{
    int n;
    readData(n);
    printData(produs(n));
    return 0;
}
