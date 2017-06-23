Alexandre Cesar da Silva
AEDS II
TP II - Switch Gravitacional
22 June 2017
Counting Sort
O problema se consiste basicamente em um problema de ordenação, sendo os arquivos de input e output recebidos por parâmetro pelo programa. Foi escolhido o método Counting Sort para a ordenação devido à característica dos números da entrada, que têm uma variação de apenas 100. Além disso foi implementado um gerador de arquivos de entrada para facilitar os testes.
Compilação & Execução
Para compilar os dois módulos: make all (os executáveis estarão disponíveis na pasta bin)
Para gerar um arquivo de entrada: ./bin/rand 100 10000 > entrada (sendo o primeiro argumento o a variação dos números e o segundo a quantidade.
Para ordenar um arquivo: ./bin/sort entrada saida
Também foi adicionada uma regra para rodar um benchmark: make bench
Estruturas de Dados
Para separar o fluxo do programa em 3 partes distintas, foram implementadas 2 estruturas de dados, uma chamada input_t que armazena os números a serem ordenados, a quantidade de números e a variação dos mesmos. E outra chamada output_t que armazena a quantidade e os números já ordenados.
Implementação
Como dito antes, o programa foi dividido em 3 partes, que são a leitura do arquivo de input, a ordenação em si, e a escrita do arquivo de output. Esse modelo não é o mais eficiente para o método utilizado, pois não seria necessário carregar todos os números na memória simultaneamente, mas ele foi utilizado para melhor separar a quantidade de tempo gasta apenas pela ordenação. A parte principal do código é a implementação do Counting Sort, que tem utilização de memória constante e performa bem mesmo para vetores grandes quando a variação dos items é pequena.
Análise de Complexidade
Sendo n = quantidade de items e k = a variação dos mesmos.
O Counting Sort é basicamente divido em 3 loops. O primeiro é o cálculo do histograma dos items e itera n vezes, sendo então O(n). O segundo calcula o índice inicial para cada valor a ser colocado no resultado, como ele itera apenas pelos valores ele é O(k). Por fim o último loop atribui os elementos às suas respectivas posições finais, sendo O(n).
A complexidade final então do método de ordenação é O(k + n).
Resultado
Executando-se o benchmark são gerados inputs com variação de 100 e quantidades indo de 100000 à 10000000, e o programa então é executado para cada input e o tempo gasto coletado. Com a ajuda da ferramenta perf foi notado que em média apenas 2.0% da utilização do tempo de CPU pelo programa é gasto na ordenação, sendo IO o responsável pelo tempo restante. O gráfico abaixo mostra a comparação entre o número de itens no vetor e o tempo total de execução do programa.  


Conclusão
Mesmo com os desvios causados pelo uso de CPU por outros processos na máquina e pela natureza aleatória dos dados é possível perceber que o tempo/quantidade de itens cresce linearmente, ao contrário do que aconteceria com outros métodos de ordenação. O método se tornou bem eficiente, gastando uma memória constante (para o algoritmo basicamente um vetor de 100 posições) e com crescimento de tempo linear, ordenando um arquivo de 10000000 (cem milhões) de números em 1.44s em uma máquina com i7-5500U, paralelamente à outros processos.