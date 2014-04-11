def sum(num):
	fenzi = 2.0
	fenmu = 1.0
	i = 1
	sum = 0
	while i <= num:
		sum = sum + fenzi / fenmu
		temp =fenzi
		fenzi = fenzi + fenmu
		fenmu = temp
		i += 1
	print sum

sum(20)