b=input();
n=0;
for i in range(len(b)):
    n=n+(2**i)*int(b[-1-i])
cont=0
while True:
    if(4**cont)>=n:
        break
    cont=cont+1
print(cont)
