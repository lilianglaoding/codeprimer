num1 = 4
num2 = 12
if num1 < num2:
	temp = num1
	num1 = num2
	num2 = temp
a = num1
b = num2
while b != 0:
	temp = a % b
	a = b
	b = temp
divisor = a
multiple = num1 * num2 / a

print  "max divisor:" ,divisor
print "min multiple:",multiple
	