def linannan(m):
	a=2.0
	b=3.0
	n=3
	p=1
	q=2
	s=2+3.0/2
	while n<=m:
		s+=(a+b)/(p+q)
		x=a
		a=b
		b=x+a
		y=p
		p=q
		q=y+p
		n+=1
	print s
 

		
