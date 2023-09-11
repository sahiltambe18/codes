# obj = open( 'sample.txt','w')
# obj.write("hello boii")
# obj.close()

import os


obj = open('sample.txt','r')
# obj.writelines("hello boii")
# obj.write(('\nsahil'))
# print(obj.readline())
# print(obj.tell())
# obj.seek(20)
# print(obj.tell())
# print(obj.readline())
# print(obj.readline())
obj2 = open('sample3.txt','a')
# for i in obj:
    # obj2.write(i)

# obj2.close()
file = open('sample3.txt','r')
print(file.read())
os.mkdir("new")
# print(os.getcwd())
# os.rmdir('new')
print(os.getcwd())