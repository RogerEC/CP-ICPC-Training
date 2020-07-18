a,b=input().split()
a=int(a); b=int(b)

if a>0 or (a%b)==0:
    if b>0:
        q=a//b
        r=a%b
    else:
        q=-(a//abs(b))
        r=a-(b*q)
    
else:
    if b>0:
        q=-(-a//b)-1
        r=a-(b*q)
    else:
        q=(-a//-b)+1
        r=a-(b*q)

print(q,r)
