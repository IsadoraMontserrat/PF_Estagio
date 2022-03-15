/*
Exercício: Idade de Camila
Cibele, Camila e Celeste são três irmãs inseparáveis. Estão sempre juntas e adoram fazer esportes, ler, cozinhar, jogar no computador... Agora estão aprendendo a programar computadores para desenvolverem seus próprios jogos.
Mas nada disso interessa para esta tarefa: estamos interessados apenas nas suas idades. Sabemos que Cibele nasceu antes de Camila e Celeste nasceu depois de Camila.
Dados três números inteiros indicando as idades das irmãs, escreva um programa para determinar a idade de Camila.

Entrada
A entrada é composta por três linhas, cada linha contendo um número inteiro N, a idade de uma das irmãs.

Saída
Seu programa deve produzir uma única linha, contendo um único número inteiro, a idade de Camila.

Restrições
5 ≤ N ≤ 100

Exemplos
Entrada
6
9
7
Saída
7
	
Entrada
34
36
38
Saída
36

Entrada
22
25
22
Saída
22

Entrada
91
91
91
Saída
91

*/
#include <iostream>

using namespace std;

int main()
{   
    //Definir um vetor que receba 3 valores
    int i[3];
    int a,k=0; //A variável k será responsável por representar a idade de Camila
    bool e;
    //O loop percorre todo o vetor de 1 em 1 atribuindo os valores recebidos em cada posição
    e = false;
    for (a=0;a<=2;a++){
        cin >> i[a];
        
        /*Caso o valor recebido não tenha o requisito necessário, o booleano se torna positivo, o loop acaba
        e uma mensagem de ERRO aparece para mostrar que o valor não é válido*/
        if (i[a] <= 5 || i[a] >= 100){
            e = true;
            cout << "ERRO\n";
            break;
        };
        
        //Os valores são verificados e comparados entre si para saber qual a mediana
        if((i[0]>=i[1] && i[0]<=i[2])||(i[0]<=i[1] && i[0]>=i[2])){
            k=i[0];
        }else if((i[1]>=i[0] && i[1]<=i[2])||(i[1]<=i[0] && i[1]>=i[2])){
            k=i[1];
        }else if((i[2]>=i[0] && i[2]<=i[1])||(i[2]<=i[0] && i[2]>=i[1])){
            k=i[2];
        };
    };
    
    /*Caso o booleano esteja ativo, subtrai-se o valor de k para que este imprima 0 devido ao ERRO,
    caso contrário, a mediana é impressa ao final do código*/
    if(e == true){
        k -= k;
    };
        cout << k;
    return 0;
}
