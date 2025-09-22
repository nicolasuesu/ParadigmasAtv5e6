def quadrado(n): 
    return n * n

def fatorial(n):
    r = 1
    for i in range(2, n+1):
        r *= i
    return r

while True:
    print("1) Quadrado\n2) Fatorial\n3) Sair")
    try:
        opcao = int(input("Opcao: "))
    except ValueError:
        print("Opcao invalida.\n")
        continue

    if opcao == 1:
        n = int(input("Digite n: "))
        print("Quadrado =", quadrado(n))
    elif opcao == 2:
        n = int(input("Digite n: "))
        print("Fatorial =", fatorial(n))
    elif opcao == 3:
        print("Saindo...")
        break
    else:
        print("Opcao invalida.\n")
