a=0; b=1
n=int(input())
if n==1:
    print(a)
elif n==2:
    print(a, b)
elif n>2:
    print(a, b, end=" ")
    for i in range(n-2):
        c=a+b
        if i!=n-3:
            print(c, end=' ')
        else:
            print(c)
        a=b; b=c
