def linan(n):
	i=2
        high=100
        while i<=n:
		high=high+200.0/(2**(i-1))
		print "The every high is:",high
		i+=1
		print "-----------------------------"
		if i==n:
			ten= 100.0/(2**i)
			print "The ten is:",ten
			print "The total high is:",high
		print "The ll Total high is:",high
#print ten
        print high
	        #i+=1
#==begin
def linan1(n):
	i=2
        high=100
	ten = high / 2.0
	while i<=n:
		high+=2.0 *  ten
		ten= ten/2.0
		i += 1
        print ten
	print high

	
#num=input("shuzi: ")
n=10
linan(n)
print "============================="
#num = 10
#linan1(num)



	
	