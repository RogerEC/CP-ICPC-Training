x=int(input())
y=int(input())
ini=min(x, y)
fim=max(x, y)+1
soma=0
for i in range(ini, fim):
    if (i%13)!=0:
        soma+=i
print(soma)
