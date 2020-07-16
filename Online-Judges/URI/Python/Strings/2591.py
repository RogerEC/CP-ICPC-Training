#Nome: 2591 - HameKameKa
#Nível: 1
#URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2591

n=int(input())

for i in range(n):
    
    entrada=input()
    pos=1
    cont1=cont2=0
    
    while entrada[pos]=='a':
        cont1+=1
        pos+=1
        
    pos=entrada.find('k')+1
    
    while entrada[pos]=='a':
        cont2+=1
        pos+=1
        
    print("k"+"a"*(cont1*cont2))