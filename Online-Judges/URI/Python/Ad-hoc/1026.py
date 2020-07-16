# Nome: 1026 - Carrega ou não Carrega
# Nível: 5
# Assunto: xor
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1026

while True:
    try:
        a,b=input().split(' ')
        a=int(a)
        b=int(b)
        print(a^b)
    except EOFError:
        break