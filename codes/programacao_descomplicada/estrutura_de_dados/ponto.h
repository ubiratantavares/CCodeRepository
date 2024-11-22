typedef struct ponto Ponto;

// cria um novo ponto
Ponto* criar(float x, float y);

// libera um ponto
void liberar(Ponto* p);

// acessa os valores das coordenadas do ponto
void acessar(Ponto* p, float* x, float* y);

// atribue valores as coordenadas do ponto
void atribuir(Ponto* p, float x, float y);

// calcula a distância entre dois pontos
float calcular_distancia_euclidiana(Ponto* p1, Ponto* p2);
