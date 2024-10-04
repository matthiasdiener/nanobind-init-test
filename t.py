from my_ext import MyType as _MyType


class MyType:
    def __init__(self, s:str):
        print("python __init__ class", s)

def my_init(self, s:str):  # different arg type compared to C++
    print("python __init__", s)

MyType.__init__ = my_init

MyType(42)
MyType("foo")
