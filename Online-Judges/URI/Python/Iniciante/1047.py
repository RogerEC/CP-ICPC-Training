hi,mi,hf,mf=input().split()
hi=int(hi)
hf=int(hf)
mi=int(mi)
mf=int(mf)
if ((24-hi)*60-mi+60*hf+mf)<=1440:
    m=((24-hi)*60-mi+60*hf+mf)
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %((m//60),(m%60)))
else:
    m=hf*60+mf-(hi*60+mi)
    print("O JOGO DUROU %d HORA(S) E %d MINUTO(S)" %((m//60),(m%60)))
