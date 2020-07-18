l=input().split()
for i in range(len(l)):
    l[i]=int(l[i])
pos=1
while l[pos]<=0:
    pos+=1
soma=0
for i in range(l[pos]):
    soma+=(l[0]+i)
print(soma)
