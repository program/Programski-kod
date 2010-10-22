#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
typedef int element;
struct lista{
      char maticni[14];
      char iprez[30];
      int godina;
      lista *sljedeci;
      };
typedef lista *liste;
int br=0;
liste FirstL(lista *L){
    L=new lista;
    L->sljedeci=NULL;
    return (L->sljedeci);
}

liste EndL(lista *L){
        lista *list;
        list=L;
        while(list->sljedeci)
                             list=list->sljedeci;
        return list;
}
int LocateL(char x[],int p,lista *L){
      L->sljedeci=NULL;
      if(p>0){
            L->sljedeci=NULL;
            lista *tekuci;
            tekuci=L->sljedeci;
            while(tekuci){
                                     if(strcmp(tekuci->maticni,x)==0)return 0;
                                     else tekuci=tekuci->sljedeci;
                                    }
        }}
int InsertL(char x[],int y,char iprez[],element p, lista *L){ 
    if(p==0) L->sljedeci=NULL;   
    lista *novi,*zadnji;
    zadnji=L;
    while(zadnji->sljedeci)
                            zadnji=zadnji->sljedeci;
    novi=new lista;
    zadnji->sljedeci=novi;
    novi->sljedeci=NULL;
    strcpy(novi->maticni,x);
    strcpy(novi->iprez,iprez);
    novi->godina=y;
      }

liste RetrieveL(int p,lista *L){
      lista *prethodni,*tekuci,*dalje;
      int zamjena;

      do{
          zamjena=0;
          prethodni=L;
          tekuci=L->sljedeci;
          while(tekuci->sljedeci){
                     dalje=tekuci->sljedeci;
                     if(strcmp((tekuci->maticni),(dalje->maticni))==1){
                                                           prethodni->sljedeci=dalje;
                                                           tekuci->sljedeci=dalje->sljedeci;
                                                           dalje->sljedeci=tekuci;
                                                           zamjena=1;
                                                           }
                     prethodni=prethodni->sljedeci;
                     tekuci=prethodni->sljedeci;
                     
                     }
          }while(zamjena==1);
                     
      lista *ispis=L->sljedeci;
      while(ispis){
                  cout << ispis->maticni << "\t\t" << ispis->iprez << "\t\t" << ispis->godina << endl;
                  ispis=ispis->sljedeci;
                  }
      cout << endl;
          }
          
liste DeleteL(int p,char mat[], lista *L){
      lista *novi,*zadnji;
      zadnji=L;
      lista *prethodni=L;
      lista *brisi=L->sljedeci;
      while(brisi){
                   if(strcmp(brisi->maticni,mat)==0){
                                           prethodni->sljedeci=brisi->sljedeci;
                                           delete brisi;
                                           cout << "Uspjesno izbrisano..." << endl;
                                           return 0;
                                           }
                   prethodni=brisi;
                   brisi=brisi->sljedeci;
                   }
      if(brisi==0)cout << "Pacijent nije jos uveden!" << endl;
           
      }
liste Retrieve_18(int p, lista *L){
      lista *prethodni,*tekuci,*sljedeci;
      int zamjena;
      do{
          zamjena=0;
          prethodni=L;
          tekuci=prethodni->sljedeci;
          while(tekuci->sljedeci){
                                 sljedeci=tekuci->sljedeci;
                                 if(tekuci->maticni>sljedeci->maticni){
                                                                       prethodni->sljedeci=sljedeci;
                                                                       tekuci->sljedeci=sljedeci->sljedeci;
                                                                       sljedeci->sljedeci=tekuci;
                                                                       zamjena=1;
                                                                       }
                                 prethodni=prethodni->sljedeci;
                                 tekuci=prethodni->sljedeci;}
          }while(zamjena==1);
      
      lista *ispis=L->sljedeci;
      while(ispis){
                   if((ispis->godina)<18){
                                         cout << ispis->maticni<< "\t\t" << ispis->iprez << "\t\t" << ispis->godina<<endl;
                                         }
                   ispis=ispis->sljedeci;
                   }
      }
