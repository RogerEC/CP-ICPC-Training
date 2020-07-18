vet = []
for i in range(110):
    vet.append(int(i*i))

while True:
    try:

        n = int(input())

        if n>=0:
            
            marc = False

            r=int(n**0.5)
            for i in range(r+1, -1, -1):
                for j in range(r+1, -1, -1):
                    if (vet[i]+vet[j]) == n:
                        marc = True
                        break
                if marc:
                    break

            if marc:
                print("YES")
            else:
                print("NO")
                
        else:
            print("NO")
        
    except EOFError:
        break
