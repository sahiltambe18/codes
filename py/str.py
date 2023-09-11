a=print("Multiplication table from 1 to 11")

for n in range(1,11):
    for i in range(1,11):
        print('%dX%d=%d'%(n,i,i*n))
    print(" ")