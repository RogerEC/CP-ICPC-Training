t=[0,0,0]
while True:
    x=int(input())
    if x==4:
        break
    elif x<4:
        t[x-1]+=1
print("MUITO OBRIGADO")
print("Alcool: %d" %t[0])
print("Gasolina: %d" %t[1])
print("Diesel: %d" %t[2])
