def fib(*n):
    if (n==1) :
        return 1
    elif (n==0) :
        return 0
    print(last)
    print(n)
    last = fib(n-1) + fib(n-2)
    


n = int(input("enter th number : "))
print(fib(n-1))
