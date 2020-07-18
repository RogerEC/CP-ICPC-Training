vi=vg=e=0
i,g=input().split()
i=int(i); g=int(g)

if i==g:
    e+=1
elif i>g:
    vi+=1
else:
    vg+=1
    
while True:
    print("Novo grenal (1-sim 2-nao)")
    op=int(input())
    
    if op==2:
        break
    
    i,g=input().split()
    i=int(i); g=int(g)

    if i==g:
        e+=1
    elif i>g:
        vi+=1
    else:
        vg+=1
print("%d grenais" %(vi+vg+e))
print("Inter:%d" %vi)
print("Gremio:%d" %vg)
print("Empates:%d" %e)
if vi==vg:
    print("Nao houve vencedor")
elif vg>vi:
    print("Gremio venceu mais")
else:
    print("Inter venceu mais")
