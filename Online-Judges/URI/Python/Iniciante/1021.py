v=float(input())
v*=100.0
v=int(v)
print("NOTAS:")
print("%d nota(s) de R$ 100.00" %(v//10000))
v%=10000
print("%d nota(s) de R$ 50.00" %(v//5000))
v%=5000
print("%d nota(s) de R$ 20.00" %(v//2000))
v%=2000
print("%d nota(s) de R$ 10.00" %(v//1000))
v%=1000
print("%d nota(s) de R$ 5.00" %(v//500))
v%=500
print("%d nota(s) de R$ 2.00" %(v//200))
v%=200
print("MOEDAS:")
print("%d moeda(s) de R$ 1.00" %(v//100))
v%=100
print("%d moeda(s) de R$ 0.50" %(v//50))
v%=50
print("%d moeda(s) de R$ 0.25" %(v//25))
v%=25
print("%d moeda(s) de R$ 0.10" %(v//10))
v%=10
print("%d moeda(s) de R$ 0.05" %(v//5))
v%=5
print("%d moeda(s) de R$ 0.01" %v)

