str = input("enter the string : ")
a = input("enter the character : ")

for i in range(len(str)):
    ch = str[i]
    if ch== a:
        print(f'index of {ch} is : {i}')
