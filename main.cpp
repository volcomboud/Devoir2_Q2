#include <iostream>

int* determinerMax(int* tableau, int taille);

int main() {
	const int TAILLE_TAB1 = 3;
	const int TAILLE_TAB2 = 10;

	int* tab1 = new int[TAILLE_TAB1];
	int* tab2 = new int[TAILLE_TAB2];

	for (int i = 0; i < TAILLE_TAB1; i++) tab1[i] = rand() % 100;
	for (int i = 0; i < TAILLE_TAB2; i++) tab2[i] = rand() % 100;

	int* ptr;

	ptr = determinerMax(tab1, TAILLE_TAB1);

	for (int i = 0; i < TAILLE_TAB1; i++) std::cout << tab1[i] << " ";

	std::cout << std::endl;

	if (ptr) std::cout << "Max tab1 est " << *ptr << std::endl; //Ajout d'une protection pour éviter de "Print" un élément NULL

	else
		std::cout << "Aucun maximum possible car le tableau est vide " << std::endl; //Message indiquant que l'élément est NULL

	ptr = determinerMax(tab2, TAILLE_TAB2);

	for (int i = 0; i < TAILLE_TAB2; i++) std::cout << tab2[i] << " ";
	std::cout << std::endl;
	std::cout << "Max tab2 est " << *ptr << std::endl;

	delete[] tab1;
	delete[] tab2;
}

int* determinerMax(int* tableau, int taille) {
	int* ptr_max = &tableau[0];             //Parce que les références, c'est mieux <--------------
	if (taille <= 0)return nullptr;

	for (int i = 1; i < taille; i++) {
		if (tableau[i] > *ptr_max)ptr_max = &tableau[i];
	}
	return ptr_max;
}

//Il faudrait plutôt un code similaire au code suivant :
//int* max = &tableau[0];
//return max;
//Ce code fonctionne car il retourne un pointeur vers une case-mémoire qui est encore valide
//après la fin de la fonction, soit la case-mémoire du tableau.Rappelez - vous que lors d’un passage par
//pointeur(comme nous avons ici), c’est le tableau original qui est passé.

//Je me sens déjà beaucoup moins cool maintenant que j'ai lu que la réponse était dans l'énoncé haha