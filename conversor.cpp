// Conversor de bases
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using std::cout;
using std::endl;
using std::string;

// string para converter decimal em binario
string toBinary(int n) {
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

// começo do programa
int main() {
    int e1;
    int e2;

  printf ("██████████████████ Conversor de Bases ████████████████ \n");
  printf ("█                                                    █ \n");
  printf ("█    █    █      ██        ██        ██      █   █   █ \n");
  printf ("█    █    █    █    █    █    █    █    █    █   █   █ \n");
  printf ("█    █    █    █    █    █    █    █    █    █   █   █ \n");
  printf ("█    █    █      ██        ██        ██      █   █   █ \n");
  printf ("█                                                    █ \n");
  printf ("██████████████████████████████████████████████████████ \n");
  
    printf ("\nQual o tipo de valor que deseja Converter?\n");
    
    printf ("Binario(1) Hexadecimal(2) Decimal(3): ");
    scanf("%d",&e1);

//erro caso um valor incorreto seja inserido
if (e1 > 3){
    printf ("\nErro! Insira um dos valores mostrados a baixo!\n");
    printf ("Binario(1) Hexadecimal(2) Decimal(3): ");
    scanf("%d",&e1);
}

//converte binario ...
if (e1 == 1){
    
    printf ("\nPara qual valor que deseja Converter?\n");
    
    printf ("Hexadecimal(1) Decimal(2): ");
    scanf("%d",&e2);
    
    //erro caso um valor incorreto seja inserido
    if (e2 > 2){
    printf ("\nErro! Insira um dos valores mostrados a baixo!\n");
    printf ("Hexadecimal(1) Decimal(2): ");
    scanf("%d",&e2);
    }
    
    // ... para hexadecimal
    if (e2 == 1){
        
        int bin, dec = 0, i;
    	printf("\nEntre com o valor binario: ");
    	scanf("%d", &bin);
    	for(i = 0; bin > 0; i++)
    	{
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    	}
    	printf("\nHexadecimal Equivalente eh: %x\n", dec);    	
    	
    }
    
    // ... para decimal
    if (e2 == 2){
    	
    char numero[10];
    printf("\nEntre com o valor binario: ");
	scanf("%s", &numero);

	int i, tam, novoValor = 0;
	tam = strlen(numero); //verifica quantos dígitos tem no número
	
	//pega os dígitos da direita para a esquerda	
	for (i = tam-1; i >= 0; i--) {
		//printf("%c|", numero[i]);
		if (numero[i] == '1') {
			novoValor += pow(2,tam-1-i);
		}
	}
	printf("\nO Decimal Equivalente é: %i", novoValor);
    }
    
}

// converte hexadecimal ...
if (e1 == 2){
    
    printf ("\nPara qual valor que deseja Converter?\n");
    
    printf ("Binario(1) Decimal(2): ");
    scanf("%d",&e2);
    
    //erro caso um valor incorreto seja inserido
    if (e2 > 2){
    printf ("\nErro! Insira um dos valores mostrados a baixo!\n");
    printf ("Binario(1) Decimal(2): ");
    scanf("%d",&e2);
    }
    
    // ... para Binario
    if (e2 == 1){
    char numero[1000],aux[10000];
    
    printf("\nEntre com o valor hexadecimal: ");
  	scanf("%s", numero);
  	for(int i = 0; i < numero[i] && numero[i] != '\0'; i++)
  	
  {
    if(numero[i] == '0')
    {
        strcat(aux,"0000");
    }
    else if(numero[i] == '1')
    {
        strcat(aux,"0001");
    }
    else if(numero[i] == '2')
    {
        strcat(aux,"0010");
    }
    else if(numero[i] == '3')
    {
        strcat(aux,"0011");
    }
    else if(numero[i] == '4')
    {
        strcat(aux,"0100");
    }
    else if(numero[i] == '5')
    {
        strcat(aux,"0101");
    }
    else if(numero[i] == '6')
    {
        strcat(aux,"0110");
    }
    else if(numero[i] == '7')
    {
        strcat(aux,"0111");
    }
    else if(numero[i] == '8')
    {
        strcat(aux,"1000");
    }
    else if(numero[i] == '9')
    {
        strcat(aux,"1001");
    }
    else if((numero[i] == 'A')||(numero[i])=='a')
    {
        strcat(aux,"1010");
    }
    else if((numero[i] == 'B')||(numero[i])=='b')
    {
        strcat(aux,"1011");
    }
    else if((numero[i] == 'C')||(numero[i])=='c')
    {
        strcat(aux,"1100");
    }
    else if((numero[i] == 'D')||(numero[i])=='d')
    {
        strcat(aux,"1101");
    }
    else if((numero[i] == 'E')||(numero[i])=='e')
    {
        strcat(aux,"1110");
    }
    else if((numero[i] == 'F')||(numero[i])=='f')
    {
        strcat(aux,"1111");
    }
  }
printf("\nHexadecimal Equivalente eh: \n");
   puts(aux);
    }
    
    // ... para decimal
    if (e2 == 2){
        
    int h; 
    printf ("\t\nEntre com um numero hexadecimal: ");
    scanf ("%X",&h);
    printf ("\t\nA conversao do numero %X em decimal é: %d \n",h,h);
    
    }
    
}

// converte decimal ...
if (e1 == 3){
    
    printf ("\nPara qual valor que deseja Converter?\n");
    
    printf ("Binario(1) Hexadecimal(2): ");
    scanf("%d",&e2);
    
    //erro caso um valor incorreto seja inserido
    if (e2 > 2){
    printf ("\nErro! Insira um dos valores mostrados a baixo!\n");
    printf ("Binario(1) Hexadecimal(2): ");
    scanf("%d",&e2);
    }
    
    // ... para binario
    if (e2 == 1){
    int number;
    
    printf ("\nEntre com o valor: ");
    scanf("%d",&number);
    
    cout << "decimal: " << number << endl;
    cout << "binary : " << toBinary(number) << endl;
    }
    
    // ... para hexadecimal
    if (e2 == 2){
        
    int d;
    printf ("\t\nEntre com um numero decimal: ");
    scanf ("%d",&d);
    printf ("\t\nA conversao do numero %d em hex é: %2X\n",d,d);
    }
}

    return 0;
}
