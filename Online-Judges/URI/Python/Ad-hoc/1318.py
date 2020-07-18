while True:
    N,M = map(int, input().split())

    if M==0 and N==0:
        break
    
    marc = []; bilhete = []

    for i in range(N+1):
        marc.append(0)

    bilhete = list(map(int, input().split()))
                   
    cont = 0
    
    for i in range(M):
        marc[bilhete[i]]+=1
        
        if marc[bilhete[i]]==2:
            cont+=1

    print(cont)
