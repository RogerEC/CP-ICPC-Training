n=int(input())
cont=0
for i in range(n):
    x=int(input())
    if x>=10 and x<=20:
        cont+=1
print("%d in" %cont)
print("%d out" %(n-cont))
