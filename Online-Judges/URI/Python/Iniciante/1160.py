t=int(input())
for k in range(t):
    pa,pb,ca,cb=input().split()
    pa=int(pa); pb=int(pb)
    ca=float(ca); cb=float(cb)
    ca/=100; cb/=100
    marc=101
    for i in range(101):
        pa+=int(pa*ca)
        pb+=int(pb*cb)
        if pa>pb:
            marc=i+1
            break
    if marc<=100:
        print("%d anos." %marc)
    else:
        print("Mais de 1 seculo.")
