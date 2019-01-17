//Trabalho - Pesquisa e Ordenação- 4 métodos de ordenação
#include "meuh.h"
#define n 10
//declaração das funções
void aleatorio(void);
void crescente(void);
void decrescente(void);
void imprime(void);
void imprime2(void);
void vetoremum(void);
void bubble(void);
void comb(void);
void insertion(void);
void shell(void);
void guardar(void);

//declaração das variáveis globais
int op,esc,cont,i,troca;
int vet[n],vet2[n+1],array[n];
int main(){
	
	 
	 for( ; ;){// for infinito no qual termina apenas quando o usuário solicitar 
	 	 printf(" Programa de ordenacao com Quatro metodos\n");
	 
	printf("\n\nEscolha um Metodo:\n\n1-Buble sort\n\n2-Insert\n\n3-Comb sort\n\n4-Shell sort\n\n5-Comparar os metodos\n\n0-Sair\n\nOpcao:");
	scanf("%d",&op);//Opção das escolhas dos métodos

system("cls");
	
	switch(op){ //Escolha dos Métodos de ordenação utilizando op 
		case 0:return 0;
		case 1:printf(" \n\n Bubble sort");
		
		printf("\n\n Escolha qual tipo de ordem deseja ordenar\n\n1-Aleatorio\n\n2-Crescente\n\n3-Decrescente\n\n0-Voltar\n\nOpcao:");
		scanf("%d",&esc); //Onde pede qual tipo deseja escolher para a entrada Aleatório,Crescente e Decrescente 
		 
		 switch(esc){
		 	case 0: break;
		 	
		 	case 1:printf("\n\n   Aleatorio");
			       aleatorio();
				   imprime();
				   	printf("\n");
			printf("\n\n  Apos a Ordenacao");	   	
		 	bubble();
		 	break;
		 ////////////////Fim case 1(esc)////////////////////////	
			 case 2:printf("\n\n   Crescente");
			    crescente();
			    imprime();
		 		printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	bubble();
		 	break;
	////////////////////////Fim case 2(esc)/////////////////////	 	
			 case 3:printf("\n\n   Decrescente");
			 decrescente();
			 imprime();
		 	printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	bubble();
		 	break;
		 	
		 	
	/////////////////////////Fim case 3(esc)///////////////////////
		 	default:printf("\n\n Opcao errada ");
		 }
	
		break;
	//////////////////////Fim Bubble//////////////////////////////
	
	
		
		case 2: printf("\n\n Insert");
		printf("\n\n Escolha qual tipo de ordem deseja ordenar\n\n1-Aleatorio\n\n2-Crescente\n\n3-Decrescente\n\n0-Voltar\n\nOpcao:");
		scanf("%d",&esc); //Onde pede qual tipo deseja escolher para a entrada Aleatório,Crescente e Decrescente 
		switch(esc){
			case 0: break;
			
			case 1:printf("\n\n   Aleatorio");
			       aleatorio();
			       vetoremum();
				   imprime2();
				   	printf("\n");
			printf("\n\n  Apos a Ordenacao");	   	
		 	insertion();
		 	
		 	break;
		 ////////////////Fim case 1(esc)////////////////////////	
			 case 2:printf("\n\n   Crescente");
			    crescente();
			    vetoremum();
			    imprime2();
		 		printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	insertion();
		 	break;
	////////////////////////Fim case 2(esc)/////////////////////	 	
			 case 3:printf("\n\n   Decrescente");
			 decrescente();
			 vetoremum();
			 imprime2();
		 	printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	insertion();
		 	break;
	/////////////////////////Fim case 3(esc)///////////////////////
		 	default:printf("\n\n Opcao errada ");
		 }
		break;	
		
	/////////////////////Fim Insert//////////////////////////////////	
	
	
		case 3: printf("\n\n Comb sort");
	
		printf("\n\n Escolha qual tipo de ordem deseja ordenar\n\n1-Aleatorio\n\n2-Crescente\n\n3-Decrescente\n\n0-Voltar\n\nOpcao:");
		scanf("%d",&esc); //Onde pede qual tipo deseja escolher para a entrada Aleatório,Crescente e Decrescente 	
	switch(esc){
		
		    case 0: break;
		 	
		 	case 1:printf("\n\n   Aleatorio");
			       aleatorio();
				   imprime();
				   	printf("\n");
			printf("\n\n  Apos a Ordenacao");	   	
		 	comb();
		 	
		 	break;
		 ////////////////Fim case 1(esc)////////////////////////	
			 case 2:printf("\n\n   Crescente");
			    crescente();
			    imprime();
		 		printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	comb();
		 	break;
	////////////////////////Fim case 2(esc)/////////////////////	 	
			 case 3:printf("\n\n   Decrescente");
			 decrescente();
			 imprime();
		 	printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	comb();
		 	break;
	/////////////////////////Fim case 3(esc)///////////////////////
		 	default:printf("\n\n Opcao errada ");
		 }
		break;
		
	////////////////////////////Fim Combsort/////////////////////
	
	
		case 4:printf("\n\n Shell sort");
		printf("\n\n Escolha qual tipo de ordem deseja ordenar\n\n1-Aleatorio\n\n2-Crescente\n\n3-Decrescente\n\n0-Voltar\n\nOpcao:");
		scanf("%d",&esc);
		switch(esc){
			case 0: break;
		 	
		 	case 1:printf("\n\n   Aleatorio");
			       aleatorio();
				   imprime();
				   	printf("\n");
			printf("\n\n  Apos a Ordenacao");	   	
		 	shell();
		 	
		 	break;
		 ////////////////Fim case 1(esc)////////////////////////	
			 case 2:printf("\n\n   Crescente");
			    crescente();
			    imprime();
		 		printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		 	shell();
		 	
		 	break;
	////////////////////////Fim case 2(esc)/////////////////////	 	
			 case 3:printf("\n\n   Decrescente");
			 decrescente();
			 imprime();
		 	printf("\n");
		 	printf("\n\n  Apos a Ordenacao");
		    shell();
		 	break;
	/////////////////////////Fim case 3(esc)///////////////////////
		 	default:printf("\n\n Opcao errada ");
		 }
		break;
		//////////////////////////Fim Shellsort/////////////////////
		
		case 5:printf("\n\n Comparacao dos Metodos");
		printf("\n\n Escolha qual tipo de ordem deseja comparar\n\n1-Aleatorio\n\n2-Crescente\n\n3-Decrescente\n\n0-Voltar\n\nOpcao:");
		scanf("%d",&esc);
		switch(esc){
			case 0: break;
		 	
		 	case 1:printf("\n\n Valor gerado de forma Aleatoria");
		 	aleatorio();
			imprime();
			getch();
			for(i=0;i<n;i++){
			
			array[i]=vet[i];
		}
			guardar();		
						
			printf("\n\n Bubble");
			bubble();
		 	getch();
		 	
		 printf("\n\n Insert");	
		    guardar();
		 	vetoremum();
			insertion();
			getch();
			
		 printf("\n\n Comb");
		 	guardar();
			comb();
			getch();
			
		 printf("\n\n Shell");
		   	guardar();
			shell();		   
			 
			 break;
			 
         ////////////////Fim case 1(esc)////////////////////////
		 			  
		 	case 2:printf("\n\n Valor gerado de forma aleatoria em Crescente");
		 	crescente();
			    imprime();
			    getch();
			for(i=0;i<n;i++){
			
			array[i]=vet[i];
		}
			guardar();
			
			printf("\n\n Bubble");
			bubble();
			getch();
			    
			printf("\n\n Insert");	
		    guardar();
		 	vetoremum();
			insertion(); 
			getch();
			
			printf("\n\n Comb");
		 	guardar();
			comb();
			getch();
			   
			printf("\n\n Shell");
		    guardar();
			shell();
			   
			 break;
			 
		////////////////////////Fim case 2(esc)/////////////////////
		
		 	case 3:printf("\n\n Valor gerado de forma aleatoria em Decrescente");
		 	decrescente();
			 imprime();
			 getch();
			 for(i=0;i<n;i++){
			
			array[i]=vet[i];
		}
			guardar();
			
			 printf("\n\n Bubble");
			
			bubble();
			getch();
			
			
			printf("\n\n Insert");	
		    guardar();
		 	vetoremum();
			insertion(); 
			getch();
			
			printf("\n\n Comb");
		 	guardar();
			comb();
			getch();
			
			printf("\n\n Shell");
		    guardar();
			shell();
			
			 break;
			 
	  /////////////////////////Fim case 3(esc)///////////////////////
	default:printf("\n\n Opcao errada ");	
	}
		break;
		default:("\n\n Opcao errada");
	} //Fim do Menu
	
getch(); system("cls");
}

  return 0;
}
	void aleatorio(void){ // gera numeros aleatorios
		int i;
	
			srand(time(NULL));
			 for(i=0;i<n;i++)
			vet[i]=rand()%100;
					
}

	void crescente(void){ //Gerando a função crescente
		int i,j,aux;
		aleatorio();
		
    for (i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	if(vet[j]>vet[j+1]){
	aux = vet[j];
	vet[j]=vet[j+1];
	vet[j+1]=aux;	
	
	}
    
    }

	void decrescente(void){ //Gerando a função decrescente
		int i,j,aux;
		aleatorio();
	for (i=1;i<n;i++)
	for(j=0;j<n-i;j++)
	if(vet[j]<vet[j+1]){
	aux = vet[j];
	vet[j]=vet[j+1];
	vet[j+1]=aux;	
	
	}
	  
}


   void imprime(void){ //Função que imprime o vetor
   	int i;
   	
   	for(i=0;i<n;i++){
		printf("\n vet[%d]: %d",i,vet[i]);	
		}
		 
   }
   
   void imprime2(void){// Imprime para o insert
   	int i;
   	for(i=1;i<=n;i++){
		printf("\n vet[%d]: %d",i-1,vet2[i]);	//Obs:Foi usado i-1 para que no tela aparecesse começando da posição 0 
		}
   }
   
   void vetoremum(void){ /*Função usada para o insert.Como o aux usa a 1ª posição do vetor
                             e o vetor que foi criado começando na posição 1, então nesse caso pega a 
                                     1ª posição do vetor criado e joga para a seguinte e assim sucessivamente  */
   	int i;
   	for(i=0;i<n;i++)
   	vet2[i+1]=vet[i]; //Nessa parte faz a troca
   	
}

void guardar(void){//Função no qual vai fazer o recebimento do vetor e vai ser chamada pelas funções de ordenação para ser utilizado o mesmo vetor 
	int i;
	
	for(i=0;i<n;i++){
	
	vet[i]=array[i];
	
}

}

///////////// Algoritimo de Ordenação Bubble Sort /////////////

   void bubble(void){ //Método bolha
		int i,j,aux,cont=0,troca=0;
	
	for (i=1;i<n;i++){ //Aumenta até n-1
	for(j=0;j<n-i;j++){ //Aumenta até n-i-1
		if(vet[j]>vet[j+1]){ //Trecho onde pergunta se a posição anterior é maior que a posição posterior, se sim realizam a troca
			aux = vet[j];
			vet[j]=vet[j+1];
			vet[j+1]=aux;
			++troca;	
		
		}++cont;
	}
}
  imprime();
 printf("\n\n Numero de Comparacoes:%d",cont); 	
 printf("\n\n Numero de Trocas:%d",troca);
}
   
   
   ///////////// Algoritimo de Ordenação Comb Sort /////////////
   
void comb(void){
	float fator_encolhimento = 1.3;//numero no qual é divido pelo gap para gerar o intervalo
	int gap = n, verdade=1, aux, i; //variaveis locais, diferencial:gap = n,no qual vamos igualar gap ao tamanho que tem o vetor.
	int cont=0,troca=0;
	while(gap>1 || verdade){//Esse laço vai se repetir enquanto gap>1 ou 1
		if(gap>1)//se gap for maior que 1 divide pelo fator de encolhimento para descobrir o intervalo
		gap = gap/fator_encolhimento;
		verdade = 0;
		i=0;
	
	while((gap+i)<n){ //Esse laço vai se repetir enquanto a soma de gap+i for menor que o tamanho que tem o vetor
		if(vet[i]>vet[i+gap]){ //Se o valor da posição de comparação inicial for maior que a posição onde esta o gap+i então realiza a troca
			aux =vet[i];
			vet[i] = vet[i+gap];
			vet[i+gap] = aux;
			verdade = 1;
			++troca;
		}
		++i;//incrementa 1 ao i
		++cont;
     	}
	}
	imprime();//Função que imprime a saída dos valores
	 printf("\n\n Numero de Comparacoes:%d",cont); 
	 printf("\n\n Numero de Trocas:%d",troca);	
}

///////////// Algoritimo de Ordenação Insert Sort /////////////
   void insertion(void){ 
	int i,j,aux,cont=0,troca=0; //váriaveis locais e "aux" que é a váriavel que guardará a cópia do numero que está sendo ordenado
	for(j=2;j<=n;j++){ // percorre o vetor a partir da 3º posição do vetor ate o final de n
	
	aux=vet2[j]; // o aux recebe a posição atual do vet [j]
	vet2[0]=aux; //a posição 0 do vetor é definida como auxiliar
	i=j-1; //i recebe o elemento de j voltando uma posição do vet[j]
	while(aux<vet2[i])  //enquanto o elemento que estiver em aux for menos que a posição atual do vet[i] faça:
	{
		vet2[i+1] = vet2[i]; //se a proxima posição do vet[i] for menor que a atual, troca se o elemento naquela posição
        ++troca;
	    --i; 
        ++cont;
	}
	vet2[i+1] = aux; // vai pra próxima posição do vetor e coloca em aux;
	++cont;
}
  imprime2();
  	 printf("\n\n Numero de Comparacoes:%d",cont); 
	   printf("\n\n Numero de Trocas:%d",troca);	
}

///////////// Algoritimo de Ordenação Shell sort /////////////
void shell(void){
    int i,j,aux,cont=0,troca=0;  // variaveis locais, o aux que irá guardar uma copia do elemento e o contador
    int gap = 1;  // Gap é o intervalo(espaçamento) das comparações e já é definido em 1
    while(gap < n) { // enquando o gap for menor q o numero de elementos faça
        gap = 3*gap+1; //calculo do gap que é a distáncia de salto, nesse caso é 3*gap + 1 para n >1
    }
    while ( gap > 1) { //enquanto o gap for maior que 1 faça
        gap /= 3; //Atualiza o valor de gap 
        for(i = gap; i < n; i++) { 
            aux = vet[i]; //  aux guarda a posição do i do vetor
			j = i - gap;
            while (j >= 0 && aux < vet[j]) { //faz a comparação entre os elementos usando o gap
                vet [j + gap] = vet[j];
                ++troca;
                j -= gap;
                ++cont;
            }
            
            vet [j + gap] = aux; //troca o valor da variavel auxiliar com a posição no indice j
            ++cont;
        }
    }
    imprime(); // chama a função para imprimir o vetor ordenado 
     printf("\n\n Numero de Comparacoes:%d",cont); 	
     printf("\n\n Numero de Trocas:%d",troca);
}


