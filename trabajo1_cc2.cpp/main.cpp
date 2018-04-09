#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

//PROBLEMA 1

int inc_1(int n){   //paso por valor
    return n++;
}
void inc_2(int& n){ //paso por referencia
    n++;
}

//PROBLEMA 2


int suma_arreglo(int arreglo[],int tam){

    int suma=0;
    if(tam<=0)
        return arreglo[tam];
    else
        return suma = arreglo[tam]+ suma_arreglo(arreglo,tam-1);

}



int main()
{
    int v[]={5,6,1,8};
    int t=3;
    cout<<suma_arreglo(v,t);
}


//PROBLEMA 3

int tamano_2(char vec[])    //solo punteros
{
    char *inicpt=vec;
    char *finpt=vec;
    while(*finpt !='\0')
        *finpt++;
    return finpt-inicpt;
}

void ord_insertionSort(char lista[])
{
    int pos,temp;
    for(int i=0;i<tamano_2(lista);i++)
    {
        pos = i;
        temp = lista[i];

        while((pos>0)&&(lista[pos-1]>temp))
        {
            lista[pos]= lista[pos-1];
            pos--;
        }
        lista[pos] = temp;
    }
}

// problema 4


void mul_matrices(int A[][20],int B[][20],int C[][20],int k,int m,int n)
{
    //k es el numero de filas de la matriz A
    //m el el numero de columnas de la matriz A y
    //m es el numero de filas de la matriz B
    //n es el numero de columnas de la matriz B
    // Inicializamos la matriz C


    for(int i=0; i<k; ++i)
         for(int j=0; j<n; ++j)
            C[i][j] = 0;


    // multiplicaion de las dos matrices para generar la matriz C .
    for(int i=0; i<k; ++i)
        for(int j=0; j<n; ++j)
            for(int z=0; z<m; ++z)
                C[i][j] += A[i][z] * B[z][j];
}


//  PROBLEMA  5


int tamano(char *cadena)
{
   int valor = 0;
   int i;

   for(i=0; cadena[ i ]!='\0'; i++)
      valor++;

   return valor;
}


int tamano_2(char vec[])    //solo punteros
{
    char *inicpt=vec;
    char *finpt=vec;
    while(*finpt !='\0')
        *finpt++;
    return finpt-inicpt;
}

//  PROBLEMA  6

// ---------- solo areglos --------

void copiar(char s[],char t[])
{
    for(int i=0;i<tamano(t);i++)
    {
        s[i]=t[i];
    }
    s[i]='\0';
}


//---------solo  punteros ---------

void copiar_2(char *s, char *t)
{

    while(*t)
    {
        *s=*t;
        s++;
        t++;
    }
    *s='\0';
}
int main()
{
    char s[]="holahsshhh";
    char t[]="como";
    copiar_2(s,t);
    cout<<s;
}

// PROBLEMA 7

// ----------- metodo arreglo-------------------

void concatenar(char s[], char t[])
{
    int i=0, j=0;
    while(s[i]!='\0'){
        i++;
    }
    while(t[j]!='\0'){
        s[i++]=t[j++];
    }
    for(int i=0;i<=strlen(s);i++)
        cout<<s[i];
}

 //  ------solo punteros------------

void concatenar_2(char *spt, char *tpt)
{
    while(*spt!='\0'){
        spt++;
    }
    while(*tpt != '\0'){
        spt++;
        *spt = *tpt;
        tpt++;
    }
}


// PROBLEMA 8

// -------- solo arreglos------------

char reves(char *cad)
{
    int a=strlen(cad);
    char *t=new char[a];
    for(int i=0;i<a;i++){
        *(t+i)=*(cad+(a-i-1));
    return *(t+i);
    }
}


//  -------solo punteros--------------

void reves_2(char cad[])
{
    char *inicpt=cad;
    while(*cad!='\0'){
       *cad++;
    }
    while(cad!=inicpt){
       *cad--;
       cout<<*cad;
    }
}


// PROBLEMA 9

// -------- solo arreglos -----------


bool palindromo(char *cad)
{
    if(reves(cad)==*cad)
        return true;
    else
        return false;
}


// -------solo punteros-------------------

bool palindromo(char *cad)
{
    if(reves(cad)==*cad)
        return true;
    else
        return false;
}



//  PROBLEMA 10

//  -------- solo arreglo-------------------

int convertir_entero(char *cadena)
{
   int aux[5]={1,10,100,1000,10000};
   int valor = 0;
   int tam = tamano(cadena);

   for(int i=tam-1; i>=0; i--)
      valor += (cadena[ i ]-'0') * aux[ tam-i-1 ];

   return valor;
}


// ---------- solo punteros----------------
