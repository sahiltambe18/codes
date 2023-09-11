class student:
    def idcard(self):
        raise NotImplementedError
    def div(self):
        raise NotImplementedError

    def roll(self):
        raise NotImplementedError

class krishna(student):
    def roll(self):
        self.rolll = 'fb33'
        # return super().idcard()

    def div(self):
        self.division = 'B'
        # return super().div()
    def idcard(self):
        # self.id = 'FE IT B'
        return 'fe it b'

st1 = krishna()
print(st1.idcard())