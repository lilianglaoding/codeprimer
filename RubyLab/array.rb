=begin
p Array.new([1,2,3])
p Array.new(5) {|i| i}
ary = Array.new(3,"foo")
ary.each {|obj| p obj.object_id}
a = 5
p a.object_id
b = 10
p b.object_id
a = ["i","love","you","mum"]
p a.size
p a.length
p a[0]
p a.at(0)
p a[1..2]
p a[1...2]
a[0] = "you"
a[1..2] = ["LOVE","YOU"]
p a[1..2]
p a*3
p a* "- "
a<<"!"
p a
a.push("!")
p a
p ([1,2,1,3,1,4,1,5] - [2,3,4,5])
aa = [["a",15],["love",22],[3,35]]
p aa.assoc("love")
=end
