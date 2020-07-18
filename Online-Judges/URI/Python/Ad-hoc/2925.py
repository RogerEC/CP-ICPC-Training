l=[0, 1, 2]
for i in range(60):
    l.append(int(str(l[-1])[::-1])+int(str(l[-2])[::-1]))

for i in range(61):
    print(l[i])

while True:
    try:
        x=int(input());
        print(l[x])
    except EOFError:
        break
