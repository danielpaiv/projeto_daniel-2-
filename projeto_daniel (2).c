#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de memória
#include <locale.h> //biblioteca de alocação de texto por região
#include <string.h> //biblioteca respomsável por cuida das string

		int registro() // ponto e virgola so pra intrucao sem ponto e virgula e pra funcao
	     {
			 char arquivo[40];
			 char cpf[40];
			 char nome[40];
			 char sobrenome[40];
			 char cargo[40];
			 
			 printf("Dgite o CPF a ser cadastrado: ");
			 scanf("%s", cpf);
			 
				 strcpy(arquivo, cpf); //resposavel para copiar os valores das string
				 
				 FILE *file; //Cria o arquivo
				 file = fopen(arquivo, "w"); //Cria o arquivo
				 fprintf(file,cpf); //salva o volor da variavel
				 fclose(file); //Fecha o arquivo
			 
				 file = fopen(arquivo, "a");
				 fprintf(file,",");
				 fclose(file);
			 
			 
			 printf("Didite o nome a ser cadastrado: ");
			 scanf("%s",nome);
				 
				 file = fopen(arquivo,"a");
				 fprintf(file,nome);
				 fclose(file);
			 
				 file = fopen(arquivo, "a");
				 fprintf(file,",");
				 fclose(file);
			 
			 printf("Digite o sobrenome a ser cadastrado: ");
			 scanf("%s",sobrenome);
			 
				 file = fopen(arquivo, "a");
				 fprintf(file,sobrenome);
				 fclose(file);
				 
				 file =fopen(arquivo, "a");
				 fprintf(file,",");
				 fclose(file);
			 
			 printf("Digite o cargo a ser cadastrado:");
			 scanf("%s",cargo);
			 
				 file = fopen(arquivo, "a");
				 fprintf(file,cargo);
				 fclose(file);
			 
			 system("pause");
			  
	     }
	
		int consulta()
	     {
	     	setlocale(LC_ALL, "portuguese"); //Definindo a limguagem
	     	
			 char cpf[40];
			 char conteudo[200];
			 
			 printf("Digite o CPF a ser consultado: ");
			 scanf("%s" ,cpf); //
			 
			 FILE *file;
			 file = fopen(cpf,"r");
			 
			 if(file == NULL)
			 
			 {
			 	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
			 	system("pause");
			 }
			 
			 while(fgets(conteudo, 200, file) != NULL)
			 {
			 	printf("\nEssas são as informações do usuário: ");
			 	printf("%s" ,conteudo);
			 	printf("\n\n");
			 	system("pause");
			 }
			 	
			 }
	
	
		int deletar()
	     {
	     	char cpf[40];
	     	
			 printf("Digite o cpf do usuário a ser deletado: ");
			 scanf("%s" ,cpf);
			 
			 remove(cpf);
			 
			 FILE *file;
			 file = fopen(cpf,"r");
			 
			 if(file == NULL)
			 
			 {
			 	printf("O usuário foi deletado com susseso!.\n");
			 	system("pause");
			 }
         }
         
         
   int main() //FUNÇÃO PRICIPAL DO NUCLEO DO PROJETO
   
         {
		 int opcao=0; //Definindo as variaveis
		 int laco=1;
	
    for(laco=1;laco=1;)
	 {
	
	     system("cls");
	
	     setlocale(LC_ALL, "portuguese"); //Definindo a limguagem
	
         printf("### gestao de pedidos ###\n\n"); //Incluindo o menu
	     printf("Escolha a opcao desejada do menu:\n\n");
	     printf("\t1 - Registrar itens\n");
	     printf("\t2 - Consultar itens\n");
	     printf("\t3 - Deletar itens\n\n"); 
		 printf("Opcção: "); //Fim do menu
	
   	     scanf("%d", &opcao); //Armazenando a escolha do usuario
	
	     system("cls");
	     
	     
    switch(opcao) // Variavel
	     {
		     case 1:
		     registro();
			 break;
			 
			 case 2:
			 consulta();
		     break;
			 
			 case 3:
			 deletar();
			 break;
			 
			 default:
			 printf("esta opcao nao esta disponivel\n");
			 system("pause");
			 break;		
	     		
		 }
	     }
		 }
	

    
