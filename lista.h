#define MAX 4

typedef struct lista{
    int Fl;
    int dados[MAX];
} Lista;

Lista* Cria_lista(void);
int E_vazia(Lista *pt1);
int E_cheia(Lista *pt1);
Lista* Insere_elem(Lista* pt1, int elem);
Lista* Remove_elem(Lista* pt1, int elem);
Lista* Insere_elem_mov(Lista* pt1, int* info);
int Consulta_no(Lista* pt1, int pos, int* info);
int Tamanho_lista(Lista* pt1);
void Imprime_lista(Lista* pt1);
Lista* Libera_lista(Lista* pt1);