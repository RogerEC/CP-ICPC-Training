cont=0
soma=0.0
while cont<2:
    x=float(input())
    if x>=0.0 and x<=10.0:
        soma+=x
        cont+=1
    else:
        print("nota invalida")
print("media = %.2f" %(soma/2))
