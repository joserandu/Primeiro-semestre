# Aula 6 - Memória - 08/04/2024

![aula4-Memoria-Interna-Primaria-RAM-01](https://github.com/joserandu/Primeiro-semestre/assets/134299499/abecf90e-8b9a-4ba6-81e2-9c240b8dc40f)1
![aula4-Memoria-Interna-Primaria-RAM-02](https://github.com/joserandu/Primeiro-semestre/assets/134299499/60f100d9-c64a-4436-94a7-b6b97e182c1e)2

- Não conseguimos chegar no REM
- Ele tem uma ligação com o contador.
- A seta dupla quer dizer que o dado vai do registrador e vai para a memória e vice-versa.
- O read e write quer dizer que ou a memória está lendo alguma informação ou está sendo gravada alguma informação.
- LDA significa um sinal e leitura e o STA está armazenando.


![aula4-Memoria-Interna-Primaria-RAM-03](https://github.com/joserandu/Primeiro-semestre/assets/134299499/05196e4f-ea79-431c-ae37-05b7d15b8c02)3

- Esse slide é importante.
- O RDM do Neander é 8 bits e o endereço da memória (REM) também é 8 bits.

![aula4-Memoria-Interna-Primaria-RAM-04](https://github.com/joserandu/Primeiro-semestre/assets/134299499/99cd0685-22a9-4fd1-9ae1-8235547507d7)4

- RAM é de acesso aleatória (random).
- O acesso é aleatório, mas o SO organiza os dados.

- A RAM é uma memória de leitura e escrita.
- Quando abrimos um app, alguem fez a gravação daquilo na memória, mas quem organiza isso é o so.

- Capacitor eletrolítico:
    - Os capacitores estão dentro, mas são microscópicos.
 ![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/87d2fc2f-e521-46d7-944b-cf9af8f9a760)

A função mais básica do capacitor é a de armazenar cargas elétricas em seu interior. Durante as descargas, os capacitores podem fornecer grandes quantidades de carga elétrica para um circuito. Os capacitores levam um pequeno tempo para serem carregados completamente, entretanto, sua descarga geralmente é rápida.

- O hacker deixa as informações na memória RAM para não ter nada dentro da memória principal, para isso, ele não desliga o computador.
- Por isso, a memória é volatil.
- Memória ROM é quando você tem um programa
- A memória somente de leitura ou ROM é um tipo de memória que permite apenas a leitura, ou seja, as suas informações são gravadas pelo fabricante uma única vez e após isso não podem ser alteradas ou apagadas, somente acessadas. São memórias cujo conteúdo é gravado permanentemente.
    - Ar condicionado e cafeteira tem esse tipo de memória, funciona com um loop e um sistema de opecação, ou seja, tem um código que não necessita de um computador para rodar um loop.
    - Ou seja, é uma memória só para leitura.
 
- Gravador de ROM:
- ![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/fa693bd8-0da2-4134-89e4-f89c7b773a85)
- É possível comprar na internet.
![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/398156af-ed07-4023-b3bd-7ee77775363d)

- Por muito tempo a memória bios do computador era feita por um e eprom.
    - Se for limpar a bios e acabar a energia do computador, apaga tudo que tinha salva.
    - ![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/b2159c63-2378-4ff4-b591-b330b0f7174a)
    - ![image](https://github.com/joserandu/Primeiro-semestre/assets/134299499/deb5f420-91ad-4508-b5a8-762199a8e415)
        - Essa tem bateria e uma memória reserva e bateria.
    - HOje a gente já usa mais a memória flash, que é a tecnologia do pendrive.

A memória flash

- Tecnologia do pendrive.
- O nível de bloco é um bloco de bytes, ou seja, vai apagando em bloco de bytes.

Na prática

- Se a gente vai trabalhar em alto nível, não trabalharemos com essa parte, mas é importante saber porque estamos em um curso de bacharel que vai ensinar a gente a ter uma visão mais geral.

![aula4-Memoria-Interna-Primaria-RAM-05](https://github.com/joserandu/Primeiro-semestre/assets/134299499/8dcfe548-3ebf-4b22-89a9-46290eb465fb)5

- Até agora falamos da DRAM.
- A memória cache é sram.

![aula4-Memoria-Interna-Primaria-RAM-06](https://github.com/joserandu/Primeiro-semestre/assets/134299499/9b562592-3a74-4759-9d79-d00341af7af8)6
![aula4-Memoria-Interna-Primaria-RAM-07](https://github.com/joserandu/Primeiro-semestre/assets/134299499/d6044da2-d7bc-42d7-af40-e6729d84066d)7
![aula4-Memoria-Interna-Primaria-RAM-08](https://github.com/joserandu/Primeiro-semestre/assets/134299499/36d7b371-026c-4658-b7ae-36ac04c51816)8

- Memória primaria e Memória RAM é a mesma coisa para nós.
- Nós acessamos a memória por um agrupamento de bits, acessar um bit não faz nem sentido.

![aula4-Memoria-Interna-Primaria-RAM-09](https://github.com/joserandu/Primeiro-semestre/assets/134299499/e9e24a6e-898b-46d6-95c8-64397f51e56f)9


![aula4-Memoria-Interna-Primaria-RAM-10](https://github.com/joserandu/Primeiro-semestre/assets/134299499/2234dccd-07ac-4bc1-8122-29e20d4a91bf)10


![aula4-Memoria-Interna-Primaria-RAM-11](https://github.com/joserandu/Primeiro-semestre/assets/134299499/df2f96e0-2267-4a90-9e41-ed10761dc93a)11

- Base binaria elevada ao número de bits, no caso 2 ^ 8 ou 2 ^ 12 ou 2 ^ 16.
- O REM aponta onde está o dado, ou seja, ele trata do endereçamento.
    - O REM é da máquina, não do sistema operacional.

- Nos dois últimos casos.

![aula4-Memoria-Interna-Primaria-RAM-12](https://github.com/joserandu/Primeiro-semestre/assets/134299499/750aff90-5c80-4655-b730-2d380126066e)12

- Esses padrões são assim, por conta de direitos autorais.

![aula4-Memoria-Interna-Primaria-RAM-13](https://github.com/joserandu/Primeiro-semestre/assets/134299499/e8d9003a-04e8-41c6-995a-1f0fec9324ce)13

![aula4-Memoria-Interna-Primaria-RAM-14](https://github.com/joserandu/Primeiro-semestre/assets/134299499/d4fa591e-a666-446a-ba7e-2452dd489d95)14

![aula4-Memoria-Interna-Primaria-RAM-15](https://github.com/joserandu/Primeiro-semestre/assets/134299499/2bba30b2-ee97-4c65-b0f7-29e115c9737a)15

![aula4-Memoria-Interna-Primaria-RAM-16](https://github.com/joserandu/Primeiro-semestre/assets/134299499/cc0405c3-383b-4075-ae9d-30be10239973)16

![aula4-Memoria-Interna-Primaria-RAM-17](https://github.com/joserandu/Primeiro-semestre/assets/134299499/a91f7477-3ba2-475a-a4e9-532e8718da74)17

![aula4-Memoria-Interna-Primaria-RAM-18](https://github.com/joserandu/Primeiro-semestre/assets/134299499/7aebbd8a-eed5-46a9-8004-ac282dfcb922)18

![aula4-Memoria-Interna-Primaria-RAM-19](https://github.com/joserandu/Primeiro-semestre/assets/134299499/d95ac893-d2d6-4f57-9b91-8c08e4a0e655)19

![aula4-Memoria-Interna-Primaria-RAM-20](https://github.com/joserandu/Primeiro-semestre/assets/134299499/94546f89-4b0f-40bc-8a18-ee0c09ad7e24)20

![aula4-Memoria-Interna-Primaria-RAM-21](https://github.com/joserandu/Primeiro-semestre/assets/134299499/f44255ee-6434-4b10-9632-622c5dc1413a)21

![aula4-Memoria-Interna-Primaria-RAM-22](https://github.com/joserandu/Primeiro-semestre/assets/134299499/9ca293ed-30d6-4de6-b353-3aa77b8ed635)22

![aula4-Memoria-Interna-Primaria-RAM-23](https://github.com/joserandu/Primeiro-semestre/assets/134299499/1497e313-1596-49d3-b7e2-504e8f41e50f)23

![aula4-Memoria-Interna-Primaria-RAM-24](https://github.com/joserandu/Primeiro-semestre/assets/134299499/f82e4b4e-6cd1-4c93-bb4c-ebc2853373d1)24

![aula4-Memoria-Interna-Primaria-RAM-25](https://github.com/joserandu/Primeiro-semestre/assets/134299499/a3a2029d-80e5-4fa1-9ed8-beedd47e17b0)25

![aula4-Memoria-Interna-Primaria-RAM-26](https://github.com/joserandu/Primeiro-semestre/assets/134299499/8d692147-2341-424a-b4a9-16e3d70bb439)26

![aula4-Memoria-Interna-Primaria-RAM-27](https://github.com/joserandu/Primeiro-semestre/assets/134299499/1708e58b-3a25-45a0-8b01-066f4826a74f)27

![aula4-Memoria-Interna-Primaria-RAM-28](https://github.com/joserandu/Primeiro-semestre/assets/134299499/8aaa7acb-8b22-4451-9495-95a0605a29a7)28
