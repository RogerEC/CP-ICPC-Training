a,b,c,d=input().split(' ')
a=int(a)
b=int(b)
c=int(c)
d=int(d)
if b>c and d>a and (d+c)>(b+a) and c>0 and d>0 and (a%2)==0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
