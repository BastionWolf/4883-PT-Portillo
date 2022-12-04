#Daniel 'June' Portillo
#Dr. Griffin
#4883 - PT
#12-4-22
Num = input()
while Num != "0":
  str(Num)
  j = 1
  Acum = 0
  
  for i in reversed(Num):
    Digit = int(i)

    Acum += Digit * (2**j -1)
    j += 1
    
  print(Acum)
  Num = input()