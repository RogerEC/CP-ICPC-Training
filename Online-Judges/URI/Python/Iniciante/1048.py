sal=float(input())
if sal<=400.00:
    rea=15
elif sal<=800.00:
    rea=12
elif sal<=1200.00:
    rea=10
elif sal<=2000.00:
    rea=7
else:
    rea=4
print("Novo salario: %.2f" %(sal*((100.0+rea)/100.0)))
print("Reajuste ganho: %.2f" %(sal*(rea/100.0)))
print("Em percentual: %d %%" %rea)
