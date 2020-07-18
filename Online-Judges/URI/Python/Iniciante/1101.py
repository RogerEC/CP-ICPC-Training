while True:
    x,y=input().split()
    x=int(x)
    y=int(y)
    if x<=0 or y<=0:
        break
    ini=min(x, y)
    fim=max(x, y)
    soma=0
    for i in range(ini, fim+1):
        print(i, end=" ")
        soma+=i
    print("Sum=%d" %soma)
