#华氏度与摄氏度的转换
class Celsius:
    def __init__(self, value = 26.0):
        self.value = float(value)
    def __get__(self, instance, owner):
        return self.value
    def __set__(self, instance, value):
        self.value = float(value)
class Fahrengeit:
    def __get__(self, instance, owner):
        return instance.cel * 1.8 + 32
    def __set__(self, instance, value):
        instance.cel = (float(value) - 32) / 1.8
class Temp:
    cel = Celsius()
    fah = Fahrengeit()

temp = Temp()
print(temp.cel)
temp.cel = 30
print(temp.cel)
print(temp.fah)

