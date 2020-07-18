l=int(input())
op=input()
m=[]

for i in range(12):
    m.append([0.0]*12)
    
for i in range(12):
    for j in range(12):
        m[i][j]=float(input())
        
soma=0.0
for i in range(12):
    soma+=m[l][i]
    
if op=="S":
    print("%.1f" %soma)
else:
    print("%.1f" %(soma/12.0))

