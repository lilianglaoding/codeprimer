sn = 100.0
hn = sn / 2.0
n = 2
while n <= 10:
	sn = sn + 2 * hn
	hn = hn / 2
	n += 1
print sn
print hn