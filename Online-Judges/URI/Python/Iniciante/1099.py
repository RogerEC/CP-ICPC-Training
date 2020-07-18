n=int(input())
for i in range(n):
    x,y=input().split()
    x=int(x)
    y=int(y)
    ini=min(x, y)
    fim=max(x, y)
    if (ini%2)==0:
        ini+=1
    else:
        ini+=2
    soma=0
    for j in range(ini, fim, 2):
        soma+=j
    print(soma)
