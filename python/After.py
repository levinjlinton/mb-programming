def convert_to_measure(val, m):
  if val<0:
    return("This is an invalid measurement. Measuremenst cannot be negative")
  if m=="in":
    return(val*2.54)
  if m=="cm":
    return(val/2.54)
  else:
    return("Invalid Measuremnt. Please write either in or cm")

print(convert_to_measure(10, "in"))
print(convert_to_measure(10, "cm"))
print(convert_to_measure(10, "x"))
print(convert_to_measure(-10, "in"))

#I combined the first two functions into one function.
#I also added a check for negative values and an else statement to check for invalid measurements.