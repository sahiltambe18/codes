n = int(input("enter the number"))
flag = True
for i in range(2, n):
    if (n % i) == 0:
        flag = False
        break

if flag:
    print("number is prime")
else:
    print("number is not prime")