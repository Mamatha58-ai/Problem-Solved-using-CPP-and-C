# Example 1: Split a string into characters
s = "HELLO"
chars = list(s)
print(chars)   # Output: ['H', 'E', 'L', 'L', 'O']

# Example 2: Split each string in an array into characters
arr = ["Hi", "Bye"]
result = [list(word) for word in arr]
print(result)  # Output: [['H', 'i'], ['B', 'y', 'e']]
