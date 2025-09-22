# Variável global
x = 10

def f():
    # A função f() foi definida no escopo global
    print(x)

def g():
    # Variável local x, visível apenas em g()
    x = 20
    f()

print("Executando em Python:")
g()
# Saída esperada:
# Executando em Python:
# 10
