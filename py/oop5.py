class engineering:
    'hello function'
    str = 'hii buddy'
    a = 5
    def __init__(self , branch , year):
        self.branch = branch
        self.year = year
        print(f'branch is {self.branch} year is {self.year}')
    
    def display(self , a):
        print(" hello world")
        print(a)

class bxe(engineering):
    def __init__(self):
        print("sunject is bxe")

         
    
sahil = engineering('IT',"FE")
print(sahil.str)
sahil.display(5)
vaidish = engineering("comp" , "se")
print(vaidish.str)
krish = bxe()


        