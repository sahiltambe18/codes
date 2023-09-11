class computer:

    wheels = 4


    def __init__(self):
        self.name = 'sahil'
        self.age = 18
        print('hhey sahil')
    def show(self):
        print(self.age)
    def show(self):
            print("hey sahil")
    
    def compare(self , c2):
        if self.age == c2.age :
            return True
        else:
            False

    @classmethod
    def tyre(cls , n):
        cls.wheels = n
    class cpu:
        ram = '18gb'
        proccessor = 'i3'
        def __init__(self):
            # super().__init__()
            print("hello sahil")
        @classmethod
        def navin(clf , ram , pross  ):
            clf.ram = ram
            clf.proccessor = pross

class child:
    def __init__(self ):
        print('hii sahil')
        
    # def show(self):
        # print("hii sahil")
class child2( child , computer):

    def hel(self):
        print("by bye")
    def __init__(self):
        super().__init__()
        print('he he sahil')
        


cs = child2()


# comp1 = computer()
# comp1.show()
# comp2 = computer()
# comp1.tyre(8)
# print(comp1.compare(comp2))
# print(comp1.wheels)
# comp2.cpu.navin('16gb' , 'i9')
# print(comp2.cpu.ram , comp2.cpu.proccessor)
# cs1 = child()
# cs1.show()

