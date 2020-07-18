v=int(input())
print(v)
print("%d nota(s) de R$ 100,00" %(v//100))
v%=100
print("%d nota(s) de R$ 50,00" %(v//50))
v%=50
print("%d nota(s) de R$ 20,00" %(v//20))
v%=20
print("%d nota(s) de R$ 10,00" %(v//10))
v%=10
print("%d nota(s) de R$ 5,00" %(v//5))
v%=5
print("%d nota(s) de R$ 2,00" %(v//2))
v%=2
print("%d nota(s) de R$ 1,00" %v)
