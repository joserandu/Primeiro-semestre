def generate_truth_table(num_variables):
    if num_variables < 1 or num_variables > 10:
        print("Número de variáveis inválido. Por favor, insira um número de 1 a 10.")
        return

    # Cria uma lista com todas as combinações possíveis de 0 a 1 para as variáveis
    truth_values = [[0, 1] for _ in range(num_variables)]

    # Calcula o número total de linhas na tabela verdade
    num_rows = 2 ** num_variables

    # Imprime o cabeçalho da tabela
    header = " | ".join([f"Var{i}" for i in range(1, num_variables + 1)])
    print(header + " | Resultado")
    print("-" * (len(header) + 10))

    # Para cada linha, calcula o resultado da operação E
    for i in range(num_rows):
        row_values = []
        for j in range(num_variables):
            row_values.append(truth_values[j][i // (2 ** (num_variables - j - 1)) % 2])

        # Calcula o resultado da operação E
        result = all(row_values)

        # Imprime os valores da linha e o resultado
        row_str = " | ".join([str(val) for val in row_values])
        print(row_str + f" | {int(result)}")


# Função para receber entrada do usuário e chamar a função generate_truth_table
def main():
    num_variables = int(input("Digite o número de variáveis (de 1 a 10): "))
    generate_truth_table(num_variables)


if __name__ == "__main__":
    main()

"""

- Desligar o computador da sala e o projetor.
- Pegar a lista de chamada 4:50.
- Falar para o Marcelo que as coisas estão na caixa e tem mais alguma coisa em cima da caixa.
"""
