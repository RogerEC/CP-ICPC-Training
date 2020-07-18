op=input()
m=[]

for i in range(12):
    m.append([0.0]*12)
    
for i in range(12):
    for j in range(12):
        m[i][j]=float(input())
        
soma=0.0
cont=0
for i in range(12):
    for j in range(i+1, 12):
        soma+=m[i][j]
        cont+=1
    
if op=="S":
    print("%.1f" %soma)
else:
    print("%.1f" %(soma/cont))

