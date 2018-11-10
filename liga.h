#ifndef LIGA
#define LIGA
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <windows.h>
#include<cmath>
#include <ctime>
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

using namespace std;

typedef struct orcamento{

    int luz;
    int publicidde;
    int comida;
    int agua;
    int cenario;
    int roupa;
    int maquiagem;
    int salariost;
    int total;


}orcamentos;

typedef struct actors{

	char nome[30];
	int salario;
	int Idade;
	int num_act;
    bool stat=true;
}Actor;


typedef struct espetaculos{

char nomeesp[30];
char nomeEncenador[30];
int data;
int precobilhete;
int nlugares;
int receitas;
char nomeact[30];
int contaactores;
int diainicio;
int mesinicio;
int anoinicio;
int diafim;
int mesfim;
int anofim;


Actor empregados[50];
orcamentos orca[50];

}Espetaculo;



typedef struct companhias{

Actor  Act[100];
int cactores;   //contador de Acts

}Companhia;

int procurar(Companhia *ptr, int a,int idtemp);
void inseriractor(Companhia *ptr, Companhia *ptr2, int a,int cont_act);
void listaractor(Companhia *ptr, int a);
void inserirespetaculo(Espetaculo *ptr2, int contespetaculos, int contaactores, Companhia *ptra, int *a);
void listarespetaculo(Espetaculo *ptr, int contespetaculos, int contaactores);
void apagaractoes(Companhia *ptr,int *a);
void apagarespetaculo(Companhia *ptr,int *a);
void editaractor(Companhia *ptr, int a);
void editarespetaculo(Espetaculo *ptr2, int contespetaculos, int contaactores, Companhia *ptra, int *a);
//void histori(Companhia *ptr,int cInicial);

#include "funcoes.h"
#include "menuprincipal.h"
#endif




