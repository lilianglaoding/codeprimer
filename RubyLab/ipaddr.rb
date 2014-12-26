for i in 1..1024
  stbyte = i % 255
  ndbyte = i / 255
  puts "192.#{ndbyte}.#{stbyte}.1"
end
		
