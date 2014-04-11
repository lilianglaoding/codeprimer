STDOUT << "I love you \n"
port = open("test.txt")
s = port.stat
p s.ftype
p s.dev
p s.ino
p s.mode
p s.nlink
p s.uid
p s.gid
p s.rdev
begin
a = port.readlines
a.each{|e| p e}
ensure
port.close
end