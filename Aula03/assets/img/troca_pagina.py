# Defina o número total de páginas
total_paginas = 10

# Inicialize a página atual como 1
pagina_atual = 1

while True:
    # Exiba a página atual
    print(f"Você está na página {pagina_atual}")

    # Pergunte ao usuário se deseja avançar, retroceder ou sair
    acao = input("Digite 'avançar', 'retroceder' ou 'sair': ")

    if acao == 'avançar':
        # Verifique se a página atual não é a última página
        if pagina_atual < total_paginas:
            pagina_atual += 1
        else:
            print("Você já está na última página.")
    elif acao == 'retroceder':
        # Verifique se a página atual não é a primeira página
        if pagina_atual > 1:
            pagina_atual -= 1
        else:
            print("Você já está na primeira página.")
    elif acao == 'sair':
        print("Programa encerrado.")
        break
    else:
        print("Ação inválida. Tente novamente.")
