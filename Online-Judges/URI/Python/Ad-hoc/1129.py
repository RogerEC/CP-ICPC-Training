aux=[]
abc="ABCDE"
while True:
    
    N = int(input())
    
    if N==0:
        break
    
    for i in range(N):
        aux=list(map(int, input().split()))
        
        marc=6
        
        for j in range(5):
            if aux[j]<=127 and marc==6:
                marc=j
            elif aux[j]<=127:
                marc=-1
                
        if marc==6 or marc==-1:
            print("*")
        else:
            print(abc[marc])
