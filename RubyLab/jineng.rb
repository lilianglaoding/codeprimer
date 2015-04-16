# get max level from str1 and str2, if equal, get min age
# name level age

str1 = 'team :1 a#c 4 36 a#b 5 32 a_c 7 47 a#c 8 27'
str2 = 'team :2 a#d 5 24 a_b 4 33 a_d 8 31 a+b 7 32'
a = []
#/(([a-zA-Z#_+]+)(\s+)([0-9]+)(\s+)(\d{1,3}))+/ =~str1
str1.scan(/([a-zA-Z#_+]+)\s+(\d+)\s+(\d+)+/).each {|name, level, age| puts "#{name} #{level} #{age}"}

