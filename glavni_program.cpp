#include<iostream>
#include "lista_polje.h"
//#include "lista_pokazivaci.h"
using namespace std;
int p=0;
void unos_pacijenta(lista *L){
     char jos;
     do{
         cout << "Maticni broj: ";
         char broj[14];
         cin>> broj;
         cout << "Ime i prezime: ";
         char iprez[30];
         cin.ignore();
         cin.getline(iprez,30);
         cout << "Godina: ";
         int g;
         cin >> g;
         InsertL(broj,g,iprez,p,L);
         p++;
         cout << "Zelite jos unositi?? ";
         cin >> jos;
         }while(jos=='d');
     }
void ispis(lista *L){
     cout << "Ispis od najmanjeg maticnog broja: " << endl;
     cout << "Maticni broj\tIme i prezime\tGodina" << endl;
     cout << "-------------\t----------------\t------" << endl;
     FirstL(L);
     RetrieveL(p,L);
     }
void manje_od(lista *L){
     cout << "Pacijenti mladi od 18 godina: " << endl;
     cout << "Maticni broj\tIme i prezime\tGodina" << endl;
     cout << "-------------\t----------------\t------" << endl;
     Retrieve_18(p,L);
     }
void brisanje(lista *L){
     cout << "Kojeg pacijenta zelite izbrisati (unesite maticni broj) ? ";
     char maticni[14];
     cin >> maticni;
     DeleteL(p,maticni,L);
     }
int main(){
    lista *lis=new lista;
    int izbor;
    do{
        cout <<"1. Unos pacijenata" << endl;
        cout <<"2. Sortirani ispis uzlazno" << endl;
        cout <<"3. Maloljetni pacijenti" << endl;
        cout <<"4. Brisanje pacijenta po maticnom broju" << endl;
        cout <<"5. Izaz iz programa" << endl;
        cout << "-------------------" << endl;
        cout << "Izbor? ";
        cin>>izbor;
        switch(izbor){
                      case 1:unos_pacijenta(lis);break;
                      case 2:ispis(lis);break;
                      case 3:manje_od(lis);break;
                      case 4:brisanje(lis);break;
                      case 5:break;
                      default: cout << "Unijeli ste krivi broj" << endl;
                      }
                      }while(izbor!=5);
    system("pause");
    return 0;
}
