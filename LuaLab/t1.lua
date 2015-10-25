s = "-k 5 -d 4 -a 3"
local args = {}
print(tostring(s))
local i = 1
for w in string.gmatch(s,"%d+") do
    --print(w)
    args[i] = w
    i = i + 1
end
print(#args)
--print(string.match(s,"%d+"))
for i = 1, #args do
    print(args[i])
end

