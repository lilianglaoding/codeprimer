def lingxing(m):
	n=(m-1)/2
	i=1
	while i<=n+1:
		x=2*i-1
	        print ' '* ((m-x)/2),'*'*x
	        i+=1
        i=n
	while i>=1:
		x=2*i-1
	        print ' '* ((m-x)/2),'*'*x
	        i-=1



m=25
lingxing(m)


