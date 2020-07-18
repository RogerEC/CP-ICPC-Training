marc=1
while marc!=2:
    cont=0
    soma=0.0
    while cont<2 and marc==1:
        x=float(input())
        if x>=0.0 and x<=10.0:
            soma+=x
            cont+=1
        else:
            print("nota invalida")
    if marc==1:
        print("media = %.2f" %(soma/2))
    print("novo calculo (1-sim 2-nao)")
    marc=int(input())
