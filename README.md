# CS50 CREDITO
Essa é uma aplicação que determina se o cartão de crédito é válido ou não, além de verificar o tipo do cartão de crédito. Foi minstrado em uma aula do curso de CS50 da ead estudar, onde passou o conceito de como funciona os tipos de cartão e do Algoritmo de Luhn. <br></br>

## ALGORITMO DE LUHN
Bem, a maioria dos cartões usa um algoritmo inventado por Hans Peter Luhn, da IBM. De acordo com o algoritmo de Luhn, você pode determinar se um número de cartão de crédito é (sintaticamente) válido da seguinte maneira:

1. Multiplique cada segundo digito por 2, começando com o penúltimo dígito do número e, em seguida, some os dígitos desses produtos.
2. Adicione essa soma à soma dos dígitos que não foram multiplicados por 2.
3. Se o último dígito do total for 0 (ou, mais formalmente, se o módulo total 10 for congruente com 0), o número é válido!
<br></br>

## TIPOS DE CARTÕES
**American Express ->** 15 digitos e começa com 34 ou 37
**Mastercard ->** 16 dígitos e começa com 51, 52, 53, 54 ou 55
**Visa ->** 13 a 16 dígitos e começa com o dígito 4

## PADRÃO
1. Multiplica todos os outros digitos por 2, começando com o penultimo digito.
2. Adicionamos esses "produtos" digitos para obter um numero
3. Adicionamos esse numero a soma de todos os outros digitos que não multiplicamos por 2
4. Se pegarmos o resultado final e o ultimo digito for 0 o cartão é válido, se não ele é inválido
<br></br>

## APLICAÇÕES PRÁTICAS
1. **Aplicativos de Pagamento Móvel:** Integração em apps que processam pagamentos, permitindo verificar a validade dos cartões antes de concluir uma transação.
2. **E-commerce:** Implementação em plataformas de comércio eletrônico para validar cartões durante o checkout, melhorando a segurança e reduzindo fraudes.
3. **Sistemas de Gestão Financeira:** Uso em software de finanças pessoais ou empresariais que ajuda os usuários a gerenciar suas contas e gastos, garantindo que os números dos cartões sejam válidos.
4. **Automação de Processos Bancários:** Aplicação em sistemas bancários que automatizam a verificação de cartões, garantindo que informações incorretas não sejam processadas.
5. **Desenvolvimento de APIs:** Criar uma API que forneça serviços de verificação de cartões para outros aplicativos ou serviços que necessitem de validação.
6. **Verificação em Terminais de Autoatendimento:** Integração em caixas eletrônicos ou terminais de autoatendimento para confirmar a validade do cartão antes de permitir transações.
7. **Sistemas de Prevenção à Fraude:** Utilização em sistemas que monitoram transações financeiras em tempo real, ajudando a identificar e bloquear tentativas de fraude com cartões inválidos.
8. **Programas de Fidelidade:** Implementação em sistemas que registram e validam cartões de fidelidade que utilizam formatos semelhantes aos cartões de crédito.
9. **Sistemas de Cadastro de Clientes:** Verificação de cartões ao criar novos cadastros de clientes em lojas físicas ou online, assegurando que os dados coletados sejam válidos.
10. **Educação e Treinamento:** Uso em cursos de programação e segurança de TI, onde os alunos aprendem sobre validação de dados e segurança em transações financeiras.
<br></br>

## COMO UTILIZAR
1. Abra o CMD
2. Digite o comando
   ```bash
   git clone "https://github.com/Paulo19961944/CS50Credito/"
3. Abra o local de sua pasta pelo CMD
4. Digite no CMD
   ```bash
   credit

## CONCLUSÃO
É um projeto com muita utilidade prática onde dá pra desenvolver em uma area muito ampla, pois tudo precisa de transação financeira, Qualquer Dúvida Estarei a Disposicão!!! Até Breve
