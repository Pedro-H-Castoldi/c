 #include <iostream>
 #include <list>
 #include <algorithm>


using namespace std;

class Grafo{
    int V; //Numero de v�rtices
    list <int> *adj; //Ponteiro contendo um arrey com as listas de adjac�ncias
public:
    Grafo(int v); // Construtor
    void adicionarArestas(int v1, int v2); //Adicionar uma aresta ao grafo

    int obtergrauDeSaida(int v); //N�mero de graus de saida de um certo vertice (grau de saida � o n�mero de saidas de uma v�rtices).

    bool existeVizinho(int v1, int v2); //Verificar se v2 � vizinho de v2
};
Grafo::Grafo(int v){
    this->V = v; //Atribui o n�mero de v�rtices
    adj = new list<int>[V]; //Cria as listas
}

void Grafo::adicionarArestas(int v1, int v2){
    adj[v1].push_back(v2); //Adiciona v2 a lista de adjacentes de v1
}

int Grafo::obtergrauDeSaida(int v){
   return adj[v].size(); //Para saber o grau de saida � s� saber o tamanho da lista de adjac�ncia
}

bool Grafo::existeVizinho(int v1, int v2){
    if(find(adj[v1].begin(), adj[v1].end(), v2) != adj[v1].end()){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    //Numeracao do tamanho do grafo
    Grafo gra(4);


    //Adicionando arestas
    gra.adicionarArestas(0, 1);
    gra.adicionarArestas(0, 3);
    gra.adicionarArestas(1, 2);
    gra.adicionarArestas(3, 1);
    gra.adicionarArestas(3, 2);

    cout << "O grau de saida do vertice informado e: " << gra.obtergrauDeSaida(0) << ".\n"; //Mostra o grau de saida

    if(gra.existeVizinho(0, 2) == 1){ //Mostra se os v�rtices s�o vizinhos
        cout << "O vertice primeiro informado e vizinhos do segundo.\n\n";
    }
    else{
        cout << "O vertice primeiro informado nao e vizinhos do segundo.\n\n";
    }


	return 0;
}
