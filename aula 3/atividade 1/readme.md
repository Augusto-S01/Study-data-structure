Reescreva o programa do exemplo anterior substituindo a estrutura
“pessoa” pela estrutura “funcionário” ao lado;

struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
}


Modifique o programa para que o usuário possa fornecer os dados
necessários relativos ao funcionários de uma empresa fictícia. Você
deve gerar entradas para 5 funcionários;
 Imprima o resultado de todos os funcionários na tela no estilo de um
relatório;

obs :Ao coletar o nome do funcionário
utilize a função “fgets”, porém este
comando capturará o “enter” do
passo anterior gerado pelo scanf().
Para sanar este problema utilize a
função “getchar()” na linha anterior à
linha que contém o “fgets”. Dessa
forma, “getchar()” capturará o
“enter” que ficou preso no buffer no
passo anterior. Também é possível
utilizar o comando “fflush(stdin)”,
que limpará completamente o buffer
de teclado.