Atividade 2
 Reescreva o programa da atividade 1 e agora não utilize
mais variáveis globais, utilize a passagem por referência
nos dois módulos. Todas as variáveis devem ser declaradas
dentro do main(), e somente as variáveis que receberão
valores (que receberão atribuições), dentro das funções
deverão ter seus endereços passados por referência. As
demais variáveis que só entregam valores para cálculo,
devem ter sua passagem de forma normal, ou seja, por
cópia;

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