i=0.0
while i<2.1:
    j=1.0
    while j<=3.0:
        if (i>-0.1 and i<0.1) or (i>0.9 and i<1.1) or (i>1.9 and i<2.1):
            print("I=%.0f J=%.0f" %(i, j+i))
        else:
            print("I=%.1f J=%.1f" %(i, j+i))
        j+=1.0
    i+=0.2
