class Test
	def print(str = "world")
		puts "hello, #{str}!"
	end
end

test = Test.new()
test.print("ruby")