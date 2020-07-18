n=int(input())
l=input().split()

for i in range(n):
    l[i]=int(l[i])

pos=0
menor=2**32
for i in range(n):
    if menor>l[i]:
        menor=l[i]
        pos=i

print("Menor valor: %d" %menor)
print("Posicao: %d" %pos)
