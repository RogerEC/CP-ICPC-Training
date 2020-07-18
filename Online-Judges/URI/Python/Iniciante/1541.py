while True:
    x=input()
    if x=="0":
        break;
    a,b,c=x.split()
    a=int(a); b=int(b); c=int(c)
    
    area=(a*b)/(c/100)
    
    for i in range(1, 10000000):
        if i*i>area:
            a=i-1
            break
    print(a)
