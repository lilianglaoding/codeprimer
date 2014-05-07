def repeat(num)
  while num > 0
    yield
    num -= 1
  end
end
repeat(3) {puts "test"}
puts "-------------------"
def rep(num,s)
  while num > 0
    yield(s)
    num -= 1
  end
end
rep(3,"liliang") {|i| puts i}
