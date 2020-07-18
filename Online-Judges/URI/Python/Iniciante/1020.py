d=int(input())
print("%d ano(s)" %(d//365))
print("%d mes(es)" %((d%365)//30))
print("%d dia(s)" %((d%365)%30))
