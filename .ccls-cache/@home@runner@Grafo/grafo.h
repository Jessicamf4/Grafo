#include <iostream>

using namespace std;

typedef string TipoItem;

class Grafo{
private:
int arestanula;
int maxcvertices;
int numvertices;
TipoItem* vertices;
int** matrizadjacencias; //um vetor de vetores

public:
Grafo(int max, int valorarestanula);
~Grafo();
int obterindice(TipoItem item);
bool estacheio();
void inserearesta(TipoItem Nosaida, TipoItem Noentrada, int peso);
void inserevertice(TipoItem item);
int obterpeso(TipoItem Nosaida, TipoItem Noentrada);
};