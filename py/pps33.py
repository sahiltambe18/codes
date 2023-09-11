class vehical:
    capacity = 10
    fuel = "diesel"
    average = 12

    def display(self):
        print("avrage of vehical is : ", self.average)


class bus(vehical):
    seats = 20


obj1 = bus
print(obj1.capacity)
print(obj1.fuel)
obj1.display(obj1)
print(obj1.seats)
