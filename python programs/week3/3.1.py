import numpy as np
print(np.add(1, 2))
'''a. To get help on the add function'''
np.info(np.add)
'''b. To test whether none of the elements of a given array is zero'''
a=np.array([1,0,3,4])
print("The array is non-zero: ", np.all(a))
'''c. To create an element-wise comparison (greater, greater_equal, less,
less_equal, equal, equal within a tolerance) of two given arrays'''
a=np.array([1,2,3])
b=np.array([3,2,1])
print(np.greater(a, b))     #greater
print(np.greater_equal(a,b))    #greater_equal
print(np.less(a,b))     #less
print(np.less_equal(a,b))   #less_equal
print(np.equal(a,b))    #equal
print(np.allclose(a,b))     #true if all the elements are equal
print(np.zeros(10))     #array of given number of zeroes
print(np.ones(10))      #array of given number of ones
print(np.linspace(1,10,5))  #pick given number of random integers in an interval

