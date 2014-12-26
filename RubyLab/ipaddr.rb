for i in 1..255
  1stbyte = i % 256
  2ndbyte = i / 256
  puts "192.#{2ndbyte}.#{1stbyte}.1"
end
		
