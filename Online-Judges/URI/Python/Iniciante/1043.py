a,b,c=input().split(' ')
a=float(a)
b=float(b)
c=float(c)
maior=max(a, b, c)
if maior<((a+b+c)-maior):
    print("Perimetro = %.1f" %(a+b+c))
else:
    print("Area = %.1f" %(((a+b)*c)/2.0))
