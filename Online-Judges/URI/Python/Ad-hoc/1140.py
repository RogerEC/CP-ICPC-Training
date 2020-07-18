palavra=[]

while True:
    x = input()

    if x == "*":
        break

    palavra = list(x.split())
    marc = True

    for i in range(1, len(palavra)):
        if palavra[0][0].upper() != palavra[i][0].upper():
            marc = False
            break

    if marc:
        print("Y")
    else:
        print("N")
