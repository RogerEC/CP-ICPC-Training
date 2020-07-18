a,b,c,d=input().split(' ')
a=float(a)
b=float(b)
c=float(c)
d=float(d)
m=float((2.0*a+3.0*b+4.0*c+d)/10.0)
if m<=7.0 and m>=5.0:
    ne=float(input())
print("Media: %.1f" %m)
if m>=7.0:
    print("Aluno aprovado.")
elif m<5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    print("Nota do exame: %.1f" %ne)
    mf=float((m+ne)/2.0)
    if mf>=5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: %.1f" %mf)
