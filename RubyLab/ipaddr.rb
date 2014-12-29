subnet = 192
for i in 1..1024
  stbyte = i % 255
  ndbyte = i / 255
  puts "#{subnet}.#{ndbyte}.#{stbyte}.1"
end
		
