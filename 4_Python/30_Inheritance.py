class Car:
    type="Petrol"
    def __init__(self,type):
        self.type=type
        # self.__class__.type=type Another way to change class attribute

    @staticmethod
    def start():
        print("Car Started")
    
    @staticmethod
    def stop():
        print("Car Stopped")

    @classmethod
    def changeType(cls,type):   # Method to change class attribute
        cls.type=type

class ToyotaCar(Car):    #All the class to be inherited can be written inside () separated with ,
    def __init__(self,name,type):
        self.name=name
        # super method is used to access methods of the parent class
        super().__init__(type)
        super().start()


car=ToyotaCar("Fortuner","Diesel")
print(car.type)
print(Car.type)
# Car.type="Diesel"  Third way to change class attribute
car.changeType("Diesel")
print(Car.type)