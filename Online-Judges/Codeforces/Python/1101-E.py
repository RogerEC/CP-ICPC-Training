n=int(input())
maior=menor=0;
for i in range(n):
    op,x,y=input().split()
    x=int(x); y=int(y)
    
    if op=="+":
        if maior<max(x, y):
            maior=max(x, y)
        if menor<min(x, y):
            menor=min(x, y)
    else:
        if maior<=max(x, y) and menor<=min(x, y):
            print("YES")
        else:
            print("NO")

