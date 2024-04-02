#include <iostream>
#include <vector>

#include "grafo.h"

string namespace std;

Grafo::Grafo(int max, int valorarestanula){
  numvertices = 0;
  maxvertices = max;
  arestanula = valorarestanula;

  vertices = new TipoItem[maxvertices];

  matrizadjacencias = new int*[maxvertices];
  for(int i=0; i<maxvertices; i++){
    matrizadjacencias[i] = new int[maxvertices];
  }

  for(int i=0; i<maxvertices; i++){
    for(int j=0; j<maxvertices; j++){
      matrizadjacencias[i][j] = arestanula;
    }
  }
}
Grafo::~Grafo(){
  delete [] vertices;
  for(int i=0; i<maxvertices; i++){
    delete[] maatrizadjacencias[i];
  }
  delete[] matrizadjacencias;
}

int Grafo::obterIndice(TipoItem item){
  int indice = 0;
  while (item != vertices[indice]){
    indice++;
  }
  return indice;
  //atividade:verificar se o valor que o usuário digitou realemtne existe
}

bool Grafo::estaCheio(){
  
}
void Grafo::inserirArco(int v1, int v2)