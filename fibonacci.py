a = 0
b = 1
c = int(input("Masukkan batas maksimal: "))
for i in range(c):
    if a < c:
        a,b=b,a+b
        
print(a)
