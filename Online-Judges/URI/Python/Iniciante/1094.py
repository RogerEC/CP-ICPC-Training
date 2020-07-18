n=int(input())
t=s=c=r=0
for i in range(n):
    qt,tp=input().split()
    qt=int(qt)
    t+=qt
    if tp=="S":
        s+=qt
    elif tp=="C":
        c+=qt
    else:
        r+=qt
print("Total: %d cobaias" %t)
print("Total de coelhos: %d" %c)
print("Total de ratos: %d" %r)
print("Total de sapos: %d" %s)
print("Percentual de coelhos: %.2f %%" %(c/t*100))
print("Percentual de ratos: %.2f %%" %(r/t*100))
print("Percentual de sapos: %.2f %%" %(s/t*100))
