#include <iostream>
#include <cstdlib>

using namespace std;
//B2 É BAITOLÃO
class tbloco{
    public:
        tmatriz *dir;
        tmatriz *baixo;
        int info;
        int linha;
        int coluna;
        tbloco(int lin, int col, int dado){
            linha=lin;
            coluna=col;
            info=dado;
            dir=baixo=this;
        }
};

class tmatriz{
    public:
        tbloco *cabeca_mor;
        tmatriz(){cabeca_mor=new tbloco(-1,-1,-1);}
        int i,j;
        for(i=0;i<5;i++){
            int k=0;
            tbloco *aux=cabeca_mor;
            tbloco *cabeca=new tbloco(0,-1,-1);
            while(k<i)
                aux=aux->dir;
            aux->dir=cabeca;
            cabeca->dir=cabeca_mor;
        }
        for(j=0;j<5;j++){
            int k=0;
            tbloco *aux=cabeca_mor;
            tbloco *cabeca=new tbloco(-1,0,-1);
            while(k<j)
                aux=aux->baixo;
            aux->baixo=cabeca;
            cabeca->baixo=cabeca_mor;
        }
        void inserir(int, int, int);
        void exibir();
};

void tmatriz::inserir(int i, int j, int d){
    int a,b,c;
    tbloco *auxl=cabeca_mor;
    tbloco *auxc=cabeca_mor;
    tbloco *aux1;
    tbloco *aux2;
    for(a=0;a<i;a++)
        auxl=auxl->baixo;
    for(b=0;b<j;b++)
        auxc=auxc->dir;
    aux1=auxl;
    aux2=auxc;
    while(aux1->dir!=auxl)
        aux1=aux1->dir;


}
