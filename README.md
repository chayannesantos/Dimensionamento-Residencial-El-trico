# Dimensionamento residencial elétrico

**O projeto foi feito utilizando a plataforma QT creator para a disciplina de técnicas de programação 2019.1. Dimensionamento residencial elétrico é uma aplicação que cadastra as dimensões dos cômodos de uma residência e fornece de forma adequada a quantidade de tomadas e potência de iluminação de acordo com os dados fornecidos pelo usuário.**

O aplicativo permite que o usuário selecione um cômodo da residência, cadastre as dimensões, dimensione a quantidade de pontos de tomadas e potência de iluminação, acompanhe a estatística da demanda e acesse um link com recomendações a serem seguidas, de acordo com a norma brasileira (NBR-5410) que estipula as condições adequadas para o funcionamento usual e seguro das instalações elétricas.

![Tela Inicial](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%201%20-%20Tela%20Inicial.jpg?raw=true)

Além da tela de cadastro e amostragem dos cômodos inseridos, o programa possui uma tela de estatísticas que mostra o cômodo que possui a maior e a menor potência de iluminação e quantidade de tomadas. Há também a exibição do valor da média e do total da potência de iluminação e pontos de tomadas.

![Estatisticas](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%202%20-%20Esatatisticas.jpg?raw=true)


# Manual do usuário 
**Dimensionamento residencial elétrico possui um layout fácil e acessível que possibilita uma utilização rápida, mas como um bom aplicativo, temos um guia para tornar sua vida de estudante, técnico, engenheiro mais fácil!**

#### Como começar a usar?

É simples! Basta inserir os dados pedidos na tela inicial, o primeiro passo é selecionar o cômodo desejado, logo após inclui-se o valor da largura e do comprimento. Em seguida clicando no botão “inserir” os dados vão ser inseridos na tabela. Além disso, há o botão “limpar” que permite que o usuário limpe os dados que foram digitados nos campos. O exemplo pode ser visto abaixo. 

 ![Selecionar Comodo](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%203%20-%20Selecionar%20Comodo.jpg?raw=true)
 
 ![Largura Comprimento](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%204%20-%20Largura%20Comprimento.jpg?raw=true)
 
Pronto, agora é possível observar que o cômodo no exemplo anterior já está inserido na tabela com sua respectiva área, pontos de tomada e potência de iluminação.  Mas não para por ai! O programa permite que o usuário cadastre vários cômodos, inclusive do mesmo tipo. 

![Tabela](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%205%20-%20Tabela.jpg?raw=true)


#### O usuario terá três opções de ordenação, poderá ordenar por nome, área/potência e quantidade de tomadas. Como fazer isso?

Contamos com três botões que possibilitam a ordenação a partir desses três criterios de maneira rápida. Basta clicar na sua opção preferida, em seguida clicar no botão “ordenar” e a tabela será ordenada automaticamente. A primeira imagem mostrará os cômodos ordenados por nome, a segunda por área/potência e a terceira por quantidade de tomadas.
 
 ![Ordenar Nome](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%206%20-%20Ordenar%20Nome.jpg?raw=true)
 
 ![Ordenar Area](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%207%20-%20Ordenar%20Area.jpg?raw=true)
 
 ![Ordenar Tomada](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%208%20-%20Ordenar%20Tomadas.jpg?raw=true)
 
 
#### Como ter acesso aos dados estatísticos?

Basta acessar o menu “estatísticas” e automaticamente a mesma mostrará os dados atualizados.
 
![Estatisticas Dados](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%209%20-%20Estatisticas.jpg?raw=true) 


#### Ops! Errei os dados das dimensões do cômodo! Como posso alterar? 

Basta clicar duas vezes na área na qual deseja editar, logo em seguida aparecerá uma mensagem para confirmar se o usuário deseja alterar, se sim (“yes”) o programa exibirá os campos nos quais o usuário deverá informar as novas dimensões.

 ![Mudar Area](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2010%20-%20Mudar%20Area.jpg?raw=true)
 
 ![Mudar Area](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2011%20-%20Mudar%20Area.jpg?raw=true)
 
 ![Mudar Area](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2012%20-%20Mudar%20Area.jpg?raw=true)


#### Como salvar o dimensionamento em um arquivo?

Pense num negócio fácil! Basta selecionar o menu ”arquivo” e clicar na opção salvar, onde o usuário poderá escolher salvar em um arquivo texto (.txt) ou salvar em um arquivo separado por virgula (.csv).

![Salvar Arquivo](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2013%20-%20Salvar%20Arquivo.jpg?raw=true)

#### E como carregar os dados de um arquivo existente?

É super fácil também! Basta selecionar um arquivo já existente que respeite a formatação (txt ou csv) lida pelo app e os dados dos cômodos pertencente a ele serão inseridos no programa. 
 
![Carregar Arquivo](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2014%20-%20Carregar%20Arquivo.jpg?raw=true)


 #### Como cadastrar o projetista?
 
O programa oferece a função de cadastrar um projetista que é a pessoa responsável pelo acompanhamento do projeto. Para cadastrar basta clicar na opção editar no menu “projetista” da tela inicial.

![Projetista](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2015%20-%20Projetista.jpg?raw=true)

Após clicar na opção editar abrirá uma janela na qual o projetista irá inserir o seu nome. Vale ressaltar que fica a critério do projetista inserir o primeiro nome, nome e sobrenome, ou até mesmo o nome completo. Após ter inserido o nome aparecerá uma outra janela para o projetista inserir o número do seu CREA (Conselho Regional de Engenharia e Agronomia).
 
![Projetista](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2016%20-%20Projetista.jpg?raw=true)

![Projetista](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2017%20-%20Projetista.jpg?raw=true)

Após esse processo é possível ver que o projetista foi cadastrado, pois o nome e o número do CREA do mesmo é adicionado na barra de status (canto inferior direito da tela inicial).

![Projetista](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2018%20-%20Projetista.jpg?raw=true)


#### Como consultar o manual ou uma norma de instrução? Não tem complicação! Basta clicar no help!

Para o usuário aprender como funciona e como utilizar o aplicativo, basta ir no menu “help”. A primeira opção “manual” irá redirecionar para este tutorial de como utilizar o aplicativo. Já a segunda opção “normas e recomendações” irá redirecionar para um link de um guia com dicas e recomendações de como calcular corretamente a potência de iluminação e quantidade de tomadas de um cômodo, vale ressaltar que estará de acordo com a norma (NBR-5410) . 
 
 ![Manual Norma](https://github.com/chayannesantos/Dimensionamento-Residencial-Eletrico/blob/master/Imagens%20do%20Readme/Imagem%2019%20-%20Manual%20e%20Norma.jpg?raw=true)
 
 **Agora é sua vez! Boa Sorte!**
