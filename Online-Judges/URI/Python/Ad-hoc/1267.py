while True:
    n,d = input().split()
    n = int(n); d = int(d)

    if n == 0 and d == 0:
        break

    vet = []; aux = []
    for i in range(n):
        vet.append(0)

    for i in range(d):
        aux = list(map(int, input().split()))

        for j in range(n):
            vet[j]+=aux[j]

    marc = False
    for i in range(n):
        if vet[i]==d:
            marc=True
            break

    if marc:
        print("yes")
    else:
        print("no")
