n=int(input())
for i in range(n):
    l,r,d=map(int, input().split())
    if (l//d)>=2 or ((l//d)==1 and (l%d)!=0):
        print(d)
    else:
        print((r//d+1)*d)
