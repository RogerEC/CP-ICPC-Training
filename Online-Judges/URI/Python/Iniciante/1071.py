x=int(input())
y=int(input())

if x>y:
    ini=y; fim=x
else:
    ini=x; fim=y
if (ini%2)==0:
    ini+=1
else:
    ini+=2

soma=0
for i in range(ini, fim, 2):
    soma+=i
print(soma)
