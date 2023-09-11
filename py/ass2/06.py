def fib( n ):

    if n<=1 :
        return 1

    result = n  * fib(n-1)
    return result

n = int(input("enter the number : "))
print(fib(n))
# 0 1 1 2 3 5 8 