a,b,c=input().split(' ')
a=float(a)
b=float(b)
c=float(c)
if a==0.0 or (b**2-4.0*a*c)<0:
    print('Impossivel calcular')
else:
    print("R1 = %.5f" %((-b+(b**2-4.0*a*c)**0.5)/(2.0*a)))
    print("R2 = %.5f" %((-b-(b**2-4.0*a*c)**0.5)/(2.0*a)))
