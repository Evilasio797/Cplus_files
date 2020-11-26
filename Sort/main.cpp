#include <iostream>

using namespace std;

int main()
{
    int valor[10];
    valor[0] = 22;
    valor[1] = 33;
    valor[2] = 33;
    valor[3] = 44;
    valor[4] = 55;
    valor[5] = 11;
    valor[6] = 99;
    valor[7] = 22;
    valor[8] = 55;
    valor[9] = 77;

    /*for(int i=0;i<=9;i++){
       cout<<"Digite o elemento do vetor: ";
       cin>> n;
       valor[i] = n;
    }*/
    for(int i=1;i<9;i++){
        int chave = valor[i];
        int j = i-1;
        while (j>=0 && valor[j]> chave){
            valor[j+1] = valor [j];
            j = j-1;
        }
        valor[j+1] = chave;
    }
    for(int i=0;i<10;i++){
        cout<<"\n"<<valor[i];
    }
    return 0;
}
