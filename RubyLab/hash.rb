#create hash
h = Hash.new
h["a"] = "ask"
h["b"] = "boy"
h.store("c","catch up!")
p h.keys
p h.values
p h.to_a
p h.values_at("a","c")
p h["a"]
p h['a']
p h["d"] = "door"
p h.index("boy")
p h.size
p h.length
p h.has_key?("a")
p h.include? ("b")
p h.key?("c")
p h.member? ("d")
p h.value?("ask")
p "----------------------------------"
p h.has_value?("boy")
p h.delete("a")
p h.size
h.clear
p h.size
h.rehash
h["a"] = "ask"
h["b"] = "boy"
h.store("c","catch up!")
h.each_pair{|k,v| p [k,v]}
