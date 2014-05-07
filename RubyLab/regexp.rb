table = "
name    no age
liliang 01 20
linan   02 20
hehe    03 24
"
#def getname(str1,age)
if /(([a-zA-Z]+)(\s+)([0-9]+)(\s+)(24)\n).*/ =~ table
	str = $&
	puts str
	puts "-"*18
	begin
	str1,str2,str3,str4 = str.split(" ")
	if (str1 != nil)
	        puts str1
	end
	if (str4 != nil)
		puts str4
	end

	puts str4
	end
end
