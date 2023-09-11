from ast import Delete


class student:
    _pro = 6   # protected member
    __pri = 69  # private member
    
    def __init__(self , name , cost):
        self.name = name
        self.cost = cost
        # print("car company is ",self.name)
        # print("car price  is ", self.cost)
    def __show(self):
        print("company ", self.name)
    def display(self , div , marks):
        self.div = div
        self.marks = marks
        print(self.__pri)
        self.__show()
        print("hello krishna" , self.div )
        print("hello sahil" , self.marks )

class shantanu(student):
    def printt(self):
        print("loda lassan")



# krishna = student("fb31" , "A")
# krishna.display('B' , '90')
# print(krishna._pro)
# print(krishna.div)
# krishna.__show()
# print(krishna.__pri)

sahil = shantanu('fb59','b')
sahil.display('B',90)
print(getattr(sahil , 'cost' , 500))
setattr(sahil , 'rate' ,501)
print(getattr(sahil , 'rate' ))
# delattr(sahil , 'cost')
print(sahil.cost)
krish = sahil.__dict__
print(krish)
print(sahil.__module__)