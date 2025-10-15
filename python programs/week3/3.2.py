import numpy as np
a=np.array([1,2,3,4,5])
'''print(type(a))
print(a.tolist())
To demonstrate the use of repr, bincount, and unique on numpy arrays'''
a=np.array([1,2,1,3,2,1,4,8])
print("Repr: ",repr(a))
print("BinCount: ", np.bincount(a))
print("Unique values: ", np.unique(a))
'''a. To extract all numbers from a given array which are less and
greater than a specified number'''
print(a!=3)
print(a[a!=3])
s=2     #specified number
less_than=a[a<s]
print(less_than)
greater_than=a[a>s]
print(greater_than)
'''b. To find the indices of the maximum and the minimum numbers along
the given axis of an array'''
a=np.array([[71,12,3],[46,5,36],[97,81,69]])
print(np.max(a))
print(np.min(a))
print(np.argmax(a))
print(np.argmin(a))
print(np.argmax(a,axis=0))
print(np.argmin(a,axis=0))
print(np.argmax(a,axis=1))
print(np.argmin(a,axis=1))
