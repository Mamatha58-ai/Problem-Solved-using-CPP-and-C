class Animal:
    def speak(self):
        print("This animal makes a sound.")

class Dog(Animal):
    def speak(self):
        print("Dog says: Woof! Woof!")

class Cat(Animal):
    def speak(self):
        print("Cat says: Meow! Meow!")

# Example usage
dog = Dog()
cat = Cat()

dog.speak()
cat.speak()
