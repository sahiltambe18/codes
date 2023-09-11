
str = input("enter string : ")
l = len(str)
if (l%5)== 0 :
     t = str[::-1]
     str = t
     print(str)
else :
    print("string is not multiple of 5")