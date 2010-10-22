#include<iostream>
#include<cstring>
using namespace std;
typedef int element;
struct lista{
       char maticni[14];
       char iprez[30];
       int godina;
       };
struct def{
       lista veliko[1000];
       int kursor;
       };
def d;
int FirstL(lista *L){
    return 0;
}
int EndL(lista *L){
    return (d.kursor);
}
element LocateL(char x[],element p,lista *L){
        if(p>0){
            for(int i=0;i<=d.kursor;i++)
                    if(strcmp(d.veliko[i].maticni,x)==1)return 0;
            return 1;}
        }
element InsertL(char x[],int y,char ip[],element p, lista *L){
        if((p>=0) && (p<1000)){
                        strcpy(d.veliko[p].maticni,x);
                        strcpy(d.veliko[p].iprez,ip);
                        d.veliko[p].godina=y;
                        d.kursor++;
                        return 1;
                        }
        else{
             if(p>=1000)
                              cout << "Polje je vec puno!" << endl;
             else cout << "element ne postoji!" << endl;
             return 0;
             }
        }
element RetrieveL(element p,  lista *L){
        lista pom;
        bool zamjena=true;
        for(int i=p-1;i>0;i--){
                zamjena = false;
                for(int j=0;j<i;j++){
                        if(strcmp(d.veliko[j].maticni,d.veliko[j+1].maticni)==1){
                                                        memcpy(&pom,&d.veliko[j],sizeof(lista));
                                                        d.veliko[j]=d.veliko[j+1];
                                                        d.veliko[j+1]=pom;
                                                        zamjena = true;
                                                        }
                        }
                }
        for(int i=0;i<p;i++)
                cout << d.veliko[i].maticni << "\t\t" << d.veliko[i].iprez << "\t\t" << d.veliko[i].godina << endl;
        }
element DeleteL(element p, char mat[], lista *L){
        int i=0;
        if((p<1000) && p>=0){
                      for(i;i<p;i++){
                          if(strcmp(d.veliko[i].maticni,mat)==0){
                               while(i<=p){ 
                                       memcpy(&d.veliko[i],&d.veliko[i+1],sizeof(lista));
                                       i++;}
                           d.kursor--;
                           }
                       }
                       cout << "Uspjesno izbrisan..." << endl;
                       for(int i=0;i<d.kursor;i++)
                                   cout << d.veliko[i].maticni << "\t\t" << d.veliko[i].iprez << "\t\t" << d.veliko[i].godina << endl;
                       return 0;
                       }
        else{
              cout << "Element ne postoji u listi" << endl;
              return 1;}
        }
element Retrieve_18(element p, lista *L){
        lista pom;
        bool zamjena=true;
        for(int i=p-1;i>0;i--){
                zamjena = false;
                for(int j=0;j<i;j++){
                        if(strcmp(d.veliko[j].maticni,d.veliko[j+1].maticni)==1){
                                                        memcpy(&pom,&d.veliko[j],sizeof(lista));
                                                        d.veliko[j]=d.veliko[j+1];
                                                        d.veliko[j+1]=pom;
                                                        zamjena = true;
                                                        }
                        }
                }
        int i=0;
        for(i;i<p;i++){
            if(d.veliko[i].godina<18){
                                  cout << d.veliko[i].maticni << "\t\t" << d.veliko[i].iprez << "\t\t" << d.   veliko[i].godina << endl;
                                  }
                                  }
        }


