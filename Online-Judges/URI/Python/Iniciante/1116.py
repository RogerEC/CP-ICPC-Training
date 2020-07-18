m=int(input())
for i in range(m):
    x,y=input().split()
    x=int(x)
    y=int(y)
    if y==0:
        print("divisao impossivel")
    else:
        print("%.1f" %(x/y))
