n=int(input())
for i in range(n):
    soma=0
    x=input()
    peso=0.2
    for j in range(3):
        soma+=(float(x.split()[j])*peso)
        if j==1:
            peso+=0.2
        else:
            peso+=0.1
    print("%.1f" %soma)
