#include <stdio.h>
#include <stdlib.h>

int InsertionSort();
int SelectionSort_Melhorado();
void imprime();


int main(){
    int i, N, Cont = 0, Cont2 = 0;
    int vet[] = {-7,8,0,2,23,4,67,-8,90,54,21};
    int vet2[] = {-7,8,0,2,23,4,67,-8,90,54,21};

    N = 11;

    Cont = InsertionSort(vet,N);
    imprime(vet,N);
    printf("\nTrocas Insertion Sort: %d ", Cont);
        printf("\n\n\n");
    
    Cont2 = SelectionSort_Melhorado(vet2,N);
    imprime(vet2,N);
    printf("\nTrocas Seleciont Sort: %d ", Cont2);
        printf("\n\n\n");


    return 0;
}

void imprime(int *V, int N){
    int i;

    for(i = 0; i < N; i++){
        printf("%d ", V[i]);
    }
}


int InsertionSort (int *V, int N){
    int i, j, aux = 0;
    int Cont = 0;

    for(i = 1; i < N; i++){
        aux = V[i];
        for(j = i;(j > 0) && (aux < V[j - 1]); j--)
            V[j] = V[j - 1];
            Cont++;
        V[j] = aux;
    }
return Cont;
}


int SelectionSort_Melhorado(int *V, int N){
	int iCont, jCont, min, aux = 0;
	int Cont2 = 0;

	for(iCont = 0; iCont < N - 1; iCont++){
		min = iCont;
		
        for(jCont = iCont + 1; jCont < N; jCont++){
			if(V[jCont] < V[min]) 
				min = jCont;
     	}
	if(iCont != min){
		aux = V[min];
		V[min] = V[iCont];
		V[iCont] = aux;
        Cont2++;
    }
  }
  return Cont2;
}
