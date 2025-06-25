#include <iostream>

using namespace std;

int main()
{
    float mil,qui,dosci,cien,cincu,veinte,diez,cinco,dos,uno,cent50,total;
    cout<<"Contador de dinero\n";
    cout<<"Introduce cuanto tienes de los siguentes datos:\n";
    cout<<"\n   Billetes de...\n";
    cout<<"\n1000: ";
    cin>>mil;
    cout<<"\n500: ";
    cin>>qui;
    cout<<"\n200: ";
    cin>>dosci;
    cout<<"\n100: ";
    cin>>cien;
    cout<<"\n50: ";
    cin>>cincu;
    cout<<"\n20: ";
    cin>>veinte;
    cout<<"\n   Monedas de...\n";
    cout<<"\n10: ";
    cin>>diez;
    cout<<"\n5: ";
    cin>>cinco;
    cout<<"\n2: ";
    cin>>dos;
    cout<<"\n1: ";
    cin>>uno;
    cout<<"\n0.50: ";
    cin>>cent50;
    total=(1000*mil)+(500*qui)+(200*dosci)+(100*cien)+(50*cincu)+(20*veinte)+(10*diez)+(5*cinco)+(2*dos)+uno+(.5*cent50);
    cout<<"\nTu dinero total es de: $"<<total;
    cout<<"\nVuelve pronto :D";
    return 0;
    //Programa listo, funciona bien.
}