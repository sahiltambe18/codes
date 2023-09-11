class base:
    n = 0
    def __init__( self, m) :
        base.n+=1
        self.m = m
        print(base.n , self.m)
    def change(self):
        base.n = 30


obj1 = base(50)
obj2 = base(10)
obj2.change()
obj3 = base(60)
obj4 = base("sss")
obj5 = base("yrcg")
print(id(obj1.m))
print(id(obj2.m))
print(id(obj2.n))
print(id(obj2.n))
