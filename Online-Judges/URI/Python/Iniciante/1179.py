p=[]; i=[]
for k in range(15):
    x=int(input())
    
    if (x%2)==0:
        p.append(x)
    else:
        i.append(x)
        
    if len(p)==5:
        while len(p):
            print("par[%d] = %d" %(5-len(p), p.pop(0)))

    if len(i)==5:
        while len(i):
            print("impar[%d] = %d" %(5-len(i), i.pop(0)))

c=len(i)
while len(i):
    print("impar[%d] = %d" %(c-len(i), i.pop(0)))

c=len(p)
while len(p):
    print("par[%d] = %d" %(c-len(p), p.pop(0)))

