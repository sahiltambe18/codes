


class base:
    __k = 100
    _z = 55
    n = 5
    def __init__(self ) :
        # self.xyz = x
        # self.y = y
        print("hello world")
    def __display(self):
        print("name" , self.__k )
    def show(self ):
        self.__display()
        
    @classmethod
    

    

class student(base):
    def __init__(self):
        print("hii")
    s = 5
    def display(self):
        print("hello world", self.n)


sahil = base()
# sahil.display()
shantanu = student()
shantanu.display()
shantanu.show()
print( shantanu.s , shantanu._z)
# print(shantanu.__k)
