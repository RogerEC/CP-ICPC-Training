n=int(input())
for i in range(1, n+1):
    s,r=input().split()
    
    if s==r:
        v=0
    elif s=="tesoura" and (r=="papel" or r=="lagarto"):
        v=1
    elif s=="papel" and (r=="pedra" or r=="Spock"):
        v=1
    elif s=="pedra" and (r=="lagarto" or r=="tesoura"):
        v=1
    elif s=="lagarto" and (r=="Spock" or r=="papel"):
        v=1
    elif s=="Spock" and (r=="tesoura" or r=="pedra"):
        v=1
    else:
        v=2

    print("Caso #%d:" %i, end=' ')
    if v==0:
        print("De novo!")
    elif v==1:
        print("Bazinga!")
    else:
        print("Raj trapaceou!")
