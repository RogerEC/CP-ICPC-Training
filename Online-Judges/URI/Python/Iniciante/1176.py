fib=[0, 1]
for i in range (2, 61):
    fib.append(fib[i-2]+fib[i-1])
n=int(input())
for i in range(n):
    c=int(input())
    print("Fib(%d) = %d" %(c, fib[c]))
