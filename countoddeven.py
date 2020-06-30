list1 = [10, 21, 4, 45, 66, 93, 1] 
evenc, oddc = 0, 0
for num in list1: 
    if num % 2 == 0: 
        evenc += 1
  
    else: 
        oddc += 1
          
print("Even numbers in the list: ", evenc) 
print("Odd numbers in the list: ", oddc) 
