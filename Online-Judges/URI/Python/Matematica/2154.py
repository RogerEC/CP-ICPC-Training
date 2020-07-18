# Problema: 2154 - Derivada de Polinômios
# Nível: 3
# URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2154

termo=[]
while True:
    try:
        T=int(input())
        termo=list(input().split(" + "))
        
        saida=""
        for i in range(len(termo)):
            c,e=termo[i].split("x")
            c=int(c)
            e=int(e)
            exp="" if (e-1)==1 else str(e-1)
            if i!=T-1:
                saida=saida+str(c*e)+"x"+exp+" + "
            else:
                saida=saida+str(c*e)+"x"+exp
        print(saida)
        
    except EOFError:
        break
