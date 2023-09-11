class pycharm:
    def display(self):
        print("for python ")
        print("faster ")
        print("beginner friendly")

class vscode:
    def display(self):
        print('hii sahil')
        print('for multiple lang')
        print('very fast')
        print('easy to use')


class keyboard:
    def __init__(self , ide):
        ide.display()

ide = pycharm()
# ide = vscode()

intel = keyboard(ide)
