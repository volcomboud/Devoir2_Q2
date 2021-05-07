#include <iostream>

int* determinerMax(int* tableau, int taille);

int main() {
    const int TAILLE_TAB1 = 3;
    const int TAILLE_TAB2 = 10;

    int* tab1 = new int[TAILLE_TAB1];
    int* tab2 = new int[TAILLE_TAB2];

    for (int i=0 ; i<TAILLE_TAB1 ; i++) tab1[i] = rand()%100;
    for (int i=0 ; i<TAILLE_TAB2 ; i++) tab2[i] = rand()%100;

    int* ptr;

    ptr = determinerMax(tab1, TAILLE_TAB1);
    for (int i=0 ; i<TAILLE_TAB1 ; i++) std::cout << tab1[i] << " ";
    std::cout << std::endl;
    std::cout << "Max tab1 est " << *ptr << std::endl;

    ptr = determinerMax(tab2, TAILLE_TAB2);
    for (int i=0 ; i<TAILLE_TAB2 ; i++) std::cout << tab2[i] << " ";
    std::cout << std::endl;
    std::cout << "Max tab2 est " << *ptr << std::endl;   

    delete[] tab1;
    delete[] tab2;
}

int* determinerMax(int* tableau, int taille) {
    
    // TODO écrire le code de cette fonction

}
