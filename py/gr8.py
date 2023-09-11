def gr8( a , b , c):
    if a>=b and a>=c :
        print("greatest number is : ",a)
    
    elif b>=a and b>=c :
        print("greatest number is : ",b)
    
    else:
        print("greatest number is : ",c)

a = int(input("enter the first number : "))
b = int(input("enter the second number : "))
c = int(input("enter the third number : "))

gr8(a , b , c)