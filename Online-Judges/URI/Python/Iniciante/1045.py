a,b,c=input().split(' ')
a=float(a)
b=float(b)
c=float(c)
if b>=a and b>=c:
    A=b; B=a; C=c
elif c>=a and c>=b:
    A=c; B=b; C=a
else:
    A=a; B=b; C=c
if A>=(B+C):
    print("NAO FORMA TRIANGULO")
else:
    if (A*A)==(B*B+C*C):
        print("TRIANGULO RETANGULO")
    elif (A*A)>(B*B+C*C):
        print("TRIANGULO OBTUSANGULO")
    elif (A*A)<(B*B+C*C):
        print("TRIANGULO ACUTANGULO")
    if A==B and B==C and C==A:
        print("TRIANGULO EQUILATERO")
    elif A==B or B==C or C==A:
        print("TRIANGULO ISOSCELES")

