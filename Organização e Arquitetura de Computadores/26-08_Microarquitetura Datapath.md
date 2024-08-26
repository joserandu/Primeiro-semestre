# Microarquitetura Datapath - Unidade de Controle | 26/08/2024

## Entregar o montador hoje.
- Falar se utilizou sistema Windons ou Linux.
- Colocar onde foi compilado (C++);

- ||||A entrega do montador é na semana 14
- |||| Pode cair na prova mas será contextualizado com a ULA.
- <b>Ver o acesso no SUAP.</b>
- Barramento, E/s, unidade de controle, seria bom revisar um pouco.
- 

- Datapath (caminho de dados) é uma coleção de unidades funcionais, como unidades lógicas aritméticas ou multiplicadores que executam operações de processamento de dados, registradores e barramentos. Junto com a unidade de controle compõe a unidade central de processamento

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0001](https://github.com/user-attachments/assets/7a260468-c54f-467a-9d63-db7895c5bcf1)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0002](https://github.com/user-attachments/assets/07cb7fed-0033-4f4f-9e8f-56331d44130a)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0003](https://github.com/user-attachments/assets/094a7c6a-1254-4e81-8ebf-cf8127ff3e02)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0004](https://github.com/user-attachments/assets/7757fef6-77ac-4bd8-a1a4-2f01e8486f17)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0005](https://github.com/user-attachments/assets/54106f4d-a2ed-4d5e-9ba4-4f4cb51afdc5)

- RD é para leitura e WD é para escrita.
- WE é o que faz a seleção do que é inscrito e o que é lido.
- No CLK(clock da máquina) do meio as 4 portas lógicas: AND, OR, NOT e XOR.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0006](https://github.com/user-attachments/assets/ac42a098-c491-444a-875d-edff55ba0b03)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0007](https://github.com/user-attachments/assets/ae777006-8af5-4104-979a-c9fa2e379afd)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0008](https://github.com/user-attachments/assets/e832ea4d-c83c-4cea-99a4-87fe96bf4148)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0009](https://github.com/user-attachments/assets/149aa031-5a61-4599-863b-33c07c4cbf58)

- O MIPS tem 32 acumuladores

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0010](https://github.com/user-attachments/assets/749c1a9d-8ace-46be-ace5-61380d842346)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0011](https://github.com/user-attachments/assets/4ec4aa58-3925-4bcc-8162-c733be2845a9)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0012](https://github.com/user-attachments/assets/8ca7c5b3-68c2-40ca-8b82-818d71454e4c)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0013](https://github.com/user-attachments/assets/36e7bae4-ae4f-4d29-8d71-271f33871adf)

- O $ é como se fosse um ponteiro la no c.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0014](https://github.com/user-attachments/assets/a968a994-518e-40b7-bb54-a116699db95a)

- A saida é o RD1.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0015](https://github.com/user-attachments/assets/1d968e98-bb1a-455e-aa77-c041599823e0)



![AulaMicroarquitetura-MIPS-HarrisHarris_page-0016](https://github.com/user-attachments/assets/db6cfff4-4a3b-4b0d-8074-1baa0f400b07)

- SrcA e B quer dizer Source.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0017](https://github.com/user-attachments/assets/2c1a93c0-8479-4ed3-a4e1-c55e32989330)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0018](https://github.com/user-attachments/assets/f51f25e2-1e92-4ddc-ab65-05457d34385d)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0019](https://github.com/user-attachments/assets/0dd2d9a8-2b0f-4c14-829b-8969a9efb0bf)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0020](https://github.com/user-attachments/assets/720ebb50-5935-4a22-b6a4-c2050a1a510b)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0021](https://github.com/user-attachments/assets/eec31968-6953-43af-bb5a-c54ebf6d16ba)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0022](https://github.com/user-attachments/assets/c241129e-f3cb-4a44-aedd-d056a3bd2b61)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0023](https://github.com/user-attachments/assets/ec612090-08fc-4cf2-bd29-6db227d1b092)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0024](https://github.com/user-attachments/assets/60c5b65f-4396-4d8b-acb7-276985e999a8)

- Sigimm é a chave de seleção.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0025](https://github.com/user-attachments/assets/13e72e3f-decf-46e2-a40d-c3bb8c8591c7)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0026](https://github.com/user-attachments/assets/14a7f71d-d293-41fb-b62f-56306aca0c18)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0027](https://github.com/user-attachments/assets/9cfe11e7-e60f-4cbc-af9c-bb1c82c62be8)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0028](https://github.com/user-attachments/assets/d9aa7309-0d7a-40d1-87ed-60ac0d097a9d)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0029](https://github.com/user-attachments/assets/24d09412-4167-4709-b042-a4e94d2ca0da)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0030](https://github.com/user-attachments/assets/2779f09a-82a3-408b-9097-24dde2d24ee8)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0031](https://github.com/user-attachments/assets/7d8a2649-a62e-4bce-9f33-51b9bd9fa231)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0032](https://github.com/user-attachments/assets/52be1a82-1b59-4661-8031-060dd4550a13)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0033](https://github.com/user-attachments/assets/31326197-4553-4175-8fb0-b00d5f3f3634)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0034](https://github.com/user-attachments/assets/c42c30fc-6e1b-477b-87f6-69403577a5cb)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0035](https://github.com/user-attachments/assets/872fe506-3ebb-4fe5-8107-5848b0df50fd)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0036](https://github.com/user-attachments/assets/1f0af181-98d8-4142-b762-ee7d6cbd8a60)

- O que precisamos saber é o funcionamento da ula, mas não ignore as outras partes.

![AulaMicroarquitetura-MIPS-HarrisHarris_page-0037](https://github.com/user-attachments/assets/fd0fc206-d2da-4f91-b03e-0fcc819bd328)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0038](https://github.com/user-attachments/assets/4e554222-c690-4419-aa2f-1d02da3f8328)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0039](https://github.com/user-attachments/assets/e36ea8f7-7592-488e-a4fb-621069358bec)
![AulaMicroarquitetura-MIPS-HarrisHarris_page-0040](https://github.com/user-attachments/assets/d9c7906d-52a3-4f0e-82ea-64435c5fa8fa)
