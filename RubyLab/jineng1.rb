h = Hash.new
for i in 1..10
	h[i] = 10-i
end
h.sort{|a,b| puts "#{a} #{b}"}
#h.each {|key, value| puts "#{key} #{value}"}