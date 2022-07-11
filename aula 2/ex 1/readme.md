Escreva um programa que implemente os dois módulos
apresentados ao lado (cálculo de vantagens e deduções).
Obs.: as variáveis utilizadas nos módulos devem ser globais
obrigatoriamente (somente as que recebem atribuições
dentro dos módulos);

O programa deve recolher os dados do usuário, armazenálos nas variáveis correspondentes e, em seguida, passar os
dados aos módulos, se necessário, para que façam o cálculo;
 Imprima na tela os resultados obtidos pelos módulos. A
rotina de impressão deve ficar fora dos módulos de cálculo,
ou seja deve ficar no main();



Metodos ao lado :


Módulo cálculoVantagens(parâmetros para cálculo)
    salárioBruto = númeroHoras * salárioHora;
    salárioFamilia = númeroFilhos * valorPorFilho;
    vantagens = salárioBruto + salário-família;
fim cálculoVantagens

Módulo cálculoDeduções(parâmetros para cálculo)
    INSS = salárioBruto * 0,08;
    IRPF = salárioBruto * taxaIR;
    Deduções = INSS + IPRF;
Fim cálculoDeduções