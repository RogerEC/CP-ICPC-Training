pos=neg=par=imp=0
for i in range(5):
    x=int(input())
    if x>0:
        pos+=1
    elif x<0:
        neg+=1
    if (x%2)==0:
        par+=1
    else:
        imp+=1
print("%d valor(es) par(es)" %par)
print("%d valor(es) impar(es)" %imp)
print("%d valor(es) positivo(s)" %pos)
print("%d valor(es) negativo(s)" %neg)
