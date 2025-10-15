class Car:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

    def start(self):
        print(f"{self.year} {self.make} {self.model} is starting...")

    def stop(self):
        print(f"{self.year} {self.make} {self.model} is stopping...")


car1 = Car("Toyota", "Corolla", 2022)
car1.start()
car1.stop()
