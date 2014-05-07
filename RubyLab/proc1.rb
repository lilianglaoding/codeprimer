def test(p)
  puts "Start"
  p.call
  puts "end"
end
t = proc{
  puts "liliang"
}
test(t)
test(proc{puts "linannan"})
