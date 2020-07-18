N = int(input())
alt = [];

for k in range(N):

    T = int(input())
    altura = list(map(int, input().split()))
    pulo = input()

    cont = 0

    for i in range(T):
        if pulo[i]=='S' and altura[i]<=2:
            cont+=1
        elif pulo[i]=='J' and altura[i]>2:
            cont+=1

    print(cont)
