n=int(input())
for i in range(n):
    x=int(input())
    if x==0:
        print("NULL")
    else:
        if x>0:
            s="POSITIVE"
        else:
            s="NEGATIVE"
        if (x%2)==0:
            p="EVEN"
        else:
            p="ODD"
        print(p,s)
