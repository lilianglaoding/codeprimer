str = "label:123"

str =~ /label:([0-9]+)/
str1 = $&
puts str1
str2, str3 = str1.split(":")
puts str3