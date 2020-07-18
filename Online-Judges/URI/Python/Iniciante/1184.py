op=input()
m=[]

for i in range(3):
    m.append([0.0]*3)
    
for i in range(3):
    for j in range(3):
        m[i][j]=float(input())
        
soma=0.0
cont=0
for i in range(3):
    for j in range(i):
        soma+=m[i][j]
        cont+=1
    
if op=="S":
    print("%.1f" %soma)
else:
    print("%.1f" %(soma/cont))

