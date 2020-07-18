def mdc(x, y):
    if y==0:
        return x
    return mdc(y, x%y)

while True:
    try:
        a,b=input().split()
        a=int(a)
        b=int(b)
        print(2*(a//mdc(a, b))+2*(b//mdc(a, b)))
    except EOFError:
        break
