di=int(input().split()[1])
hi,mi,si=input().split(" : ")
hi=int(hi); mi=int(mi); si=int(si)
df=int(input().split()[1])
hf,mf,sf=input().split(" : ")
hf=int(hf); mf=int(mf); sf=int(sf)

if di==df:
    s=hf*3600+mf*60+sf-(hi*3600+mi*60+si)
    print("0 dia(s)")
    print("%d hora(s)" %(s//3600))
    s%=3600
    print("%d minuto(s)" %(s//60))
    print("%d segundo(s)" %(s%60))
else:
    s=(86400-(hi*3600+mi*60+si))+hf*3600+mf*60+sf
    d=df-di-1
    if s>=86400:
        d+=1
        s%=86400
    print("%d dia(s)" %d)
    print("%d hora(s)" %(s//3600))
    s%=3600
    print("%d minuto(s)" %(s//60))
    print("%d segundo(s)" %(s%60))
