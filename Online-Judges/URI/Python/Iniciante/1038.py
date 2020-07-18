cd,qt=input().split(' ')
cd=int(cd)
qt=int(qt)
if cd==1:
    print("Total: R$ %.2f" %(qt*4.0))
elif cd==2:
    print("Total: R$ %.2f" %(qt*4.5))
elif cd==3:
    print("Total: R$ %.2f" %(qt*5.0))
elif cd==4:
    print("Total: R$ %.2f" %(qt*2.0))
elif cd==5:
    print("Total: R$ %.2f" %(qt*1.5))
