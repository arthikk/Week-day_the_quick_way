y=raw_input("Enter the year: ")
m=raw_input("Enter the month: ")
d=raw_input("Enter the date: ")
y=y%400
days=["Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"]
print days[(3*int((9*m-8)/10)-int(abs(2*m-4)/5)+int(5*y/4)-int(y/100)+((1 if (y%4 == 0) else 0) - (1 if (y%100 == 0) else 0) + (1 if (y == 0) else 0))*(1 if (m<3) else 0)+d)%7]
