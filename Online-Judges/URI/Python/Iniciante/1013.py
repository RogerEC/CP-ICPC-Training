a,b,c=input().split(' ')
a=int(a)
b=int(b)
c=int(c)
ab=(a+b+abs(a-b))//2
abc=(ab+c+abs(ab-c))//2
print("%d eh o maior" % abc)
