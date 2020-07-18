while True:
    
    n=int(input())
    
    if n==0:
        break

    for i in range(n):
        cont=i
        for j in range(n):
            if j!=(n-1):
                print("%3d" %(cont+1), end=' ')
            else:
                print("%3d" %(cont+1))
            if j<i:
                cont-=1
            else:
                cont+=1
    print()
