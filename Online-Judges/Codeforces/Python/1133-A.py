hi,mi=input().split(":")
hi=int(hi)
mi=int(mi)
hf,mf=input().split(":")
hf=int(hf)
mf=int(mf)

ti=hi*60+mi
tf=hf*60+mf
if hi<=hf:
    d=tf-ti;
else:
    d=1440-ti+tf;
d//=2
ti+=d
print("%02d:%02d" %((ti//60)%24, ti%60))
