sal=float(input())
if sal<=2000.00:
    print("Isento")
elif sal<=3000.00:
    print("R$ %.2f" %((sal-2000.0)*0.08))
elif sal<=4500.00:
    print("R$ %.2f" %((sal-3000.0)*0.18+80))
else:
    print("R$ %.2f" %((sal-4500.0)*0.28+350))
