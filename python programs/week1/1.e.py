def fibnoci(k):
    a = 0
    b = 1 
    for i in range(k):   
         print(a)
         c = a + b
         a = b   
         b = c 
fibnoci(5)
