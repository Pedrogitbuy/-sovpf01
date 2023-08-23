#include <stdio.h>
 int main(){

 //* Defina o n�mero total de p�ginas *//
total_paginas = 10

 //*Inicialize a p�gina atual como 1 *//
pagina_atual = 1

while True:
    //* Exiba a p�gina atual *//
    printf("Voc� est� na p�gina {pagina_atual}")

    //* Pergunte ao usu�rio se deseja avan�ar, retroceder ou sair *//
    acao = input("Digite 'avan�ar', 'retroceder' ou 'sair': ")

    if acao == 'avan�ar':
        //* Verifique se a p�gina atual n�o � a �ltima p�gina *//
        if pagina_atual < total_paginas:
            pagina_atual += 1
        else:
            print("Voc� j� est� na �ltima p�gina.")
    else if acao == 'retroceder':
        //* Verifique se a p�gina atual n�o � a primeira p�gina *//
        if pagina_atual > 1:
            pagina_atual -= 1
        else:
            print("Voc� j� est� na primeira p�gina.")
    else if acao == 'sair':
        print("Programa encerrado.")
        break
    else:
        print("A��o inv�lida. Tente novamente.")
return 0;
}
