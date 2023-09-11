class students:

    def marks( val1 , val2 , val3 ):
        chem = val1
        bxe = val2
        maths2 = val3
        listing = [ chem , bxe , maths2]
        return listing

obj1 = students
list1 = obj1.marks( 90 , 80 , 99)

obj2 = students
list2 = obj2.marks(90 , 96 , 92)

obj3 = students
list3 = obj3.marks( 88 , 93 , 85)

ans = [list1 , list2 , list3]
print(ans)
