#include <iostream>
using namespace std;






//TD 4 (SPECIFICITES DE C++)
/*

int main(){
  int nb = 10;
  int& refNB = nb;
  int* ptrNB = &nb;

  cout << "la valeur du nb : " << nb << endl;
  cout << "L'address de la variable &nb est de : " << &nb << endl; //pour afficher l'address de la variable nb pour l'exemple est "&nb";
  cout << "la valeur pointer par la refNb est : " << refNB <<endl;
  cout << "la valeur pointer par le pointeur est : " << *ptrNB << endl;
  cout << " Adress pointer par le pointeur est : " << ptrNB << endl;

  return 0;
}


*/



/*
//TD 3(SPECIFICITES DE C++)

void remplitab(int tab[],int tailleTab){
  for (int i = 0;i < tailleTab; i++){//verifier bien que le code dans le boucle est point virgule et aussi que vous utiliser de la syntax c++
    tab[i] = i;
  }
}

void printab(int tab[],int tailleTab){
 
   for (int i = 0;i < tailleTab; i++){
     cout << "la valeur du tableau est egale a : " << tab[i] << endl;
  }
}

void tableau(){
  int tailleTab = 10;
  int tab[tailleTab];
  int& refFive = tab[tailleTab/2];
  int* ptrSeven = &tab[tailleTab - 3];//n'oublier pas le "&" du valeur a pointer

  remplitab(tab,tailleTab);
  refFive = tab[tailleTab/2] + 1;
  *ptrSeven = tab[tailleTab - 3 ] + 1;
  printab(tab,tailleTab);

}
int main(){

  tableau();

  return 0;
}


*/



//TD 2(SPECIFICITES DE C++)

/*
void modifValue(double& refN,double* pointP){
  refN = 1;
  *pointP = 5;//pour modifier un valeur via a une pointeur,il ne faut pas oublier le *
}

int main(){
  double n = 25;
  double p = 13;

  cout << "la valeur du variable n et p avant la modification  : " << n << "," << p << endl;

  modifValue(n,&p);

  cout << "la valeur du variable n et p apres la modification : " << n << "," << p << endl;

  return 0;

}

*/

