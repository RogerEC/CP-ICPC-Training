while True:
    try:
        n=int(input())

        c=(n//3)-1
        for i in range(n):
            for j in range(n):
                if i==(n//2) and j==(n//2):
                    print(4, end='')
                elif (i>c and i<(n-c-1)) and (j>c and j<(n-c-1)):
                    print(1, end='')
                elif i==j:
                    if j!=(n-1):
                        print(2, end='')
                    else:
                        print(2)
                elif ((n-1)-i)==j:
                    if j!=(n-1):
                        print(3, end='')
                    else:
                        print(3)
                else:
                    if j!=(n-1):
                        print(0, end='')
                    else:
                        print(0)
        print()
        
    except EOFError:
        break
