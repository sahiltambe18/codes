def passs(pin):
    s = 0
    e = 1000
    while( s < e):
        if s == pin :
            print("password found !! ")
            print("password is : ",s)
            return
        s+=1
    print("password not found")

pin = int(input("enter the pin : "))
passs(pin)