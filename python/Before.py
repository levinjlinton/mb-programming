value = 10

def convert_to_cm(inc):
  return(inc*2.54)

def convert_to_in(cm):
  return(cm/2.54)

print(convert_to_cm(value), "centimeters")
print(convert_to_in(value), "inches")