class Animal:
    def make_sound(self):
        print("Some generic animal sound")

class Dog(Animal):
    def make_sound(self):
        print("Dog barks: Woof!")

class Cat(Animal):
    def make_sound(self):
        print("Cat meows: Meow!")

class Bird(Animal):
    def make_sound(self):
        print("Bird chirps: Tweet!")

# Demonstrating polymorphism
animals = [Dog(), Cat(), Bird()]

for animal in animals:
    animal.make_sound()
