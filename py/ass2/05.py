from re import I


def fib( n ):

    if n<=1 :
        return n

    sum = fib(n-1) + fib(n-2)
    return sum

n = int(input("enter the number : "))
for i in range(0 , n+1):
    print(fib(i))
# 0 1 1 2 3 5 8 