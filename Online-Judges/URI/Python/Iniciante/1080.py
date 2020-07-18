m=[-1,0]
for i in range(100):
    x=int(input())
    if x>m[0]:
        m[0]=x
        m[1]=i+1
print(m[0])
print(m[1])
