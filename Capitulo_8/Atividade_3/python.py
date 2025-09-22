def processar(nums):
    for x in nums:
        if x == 0:
            break              # 1) interrompe o laço
        if x < 0:
            continue           # 2) ignora negativos
        if x % 2 == 0:
            return 2 * x       # 3) retorna resposta imediatamente
    return None                 # nenhum par antes de 0

print(processar([3, -2, 5, 8, 7]))   # 16
print(processar([3, -5, 5, 0, 4]))   # None (parou no 0 antes de achar par)
