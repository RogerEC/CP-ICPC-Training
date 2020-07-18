cont=0; soma=0.0
for i in range(6):
    x=float(input())
    if x>=0.0:
        soma+=x
        cont+=1
print("%d valores positivos" %cont)
print("%.1f" %(soma/cont))
