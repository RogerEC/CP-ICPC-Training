m=[]
for i in range(100):
    m.append([0]*100)
while True:
    n=int(input())
    if n==0:
        break

    cont=0;
    cont2=1
    for k in range(n//2):
        for i in range(cont, n-cont):
            for j in range(cont, n-cont):
                m[i][j]=cont+1
        cont+=1
    if (n%2)==1:
        m[n//2][n//2]=cont+1
    
    for i in range(n):
        for j in range(n):
            if j!=(n-1):
                print("%3d" %m[i][j], end=' ')
            else:
                print("%3d" %m[i][j])
    print()

