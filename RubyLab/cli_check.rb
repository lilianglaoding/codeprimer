file_cli_all = "all"
file_cli_pruned = "pruned"
file_cli_support = "support"

file_array = [file_cli_all, file_cli_pruned, file_cli_support]
puts file_array[0]
puts file_array[1]
puts file_array[2]

def string_replace(str)
  str.gsub(/<.*?>/, '<1>')
end

def file_replace(file)
  if (File.file?(file))
    str = open(file) {|f| string_replace(f.read)}
    open(file, "w") {|f| f.puts str}
  else
    puts "Error! File #{file} dosen't exist!"
  end
end

def file_process(file_arr)
  for file in file_arr
    file_replace(file)
    #puts file_arr
  end
end

def check_pruned_cli(file_all, file_pruned)
  cli_all = open(file_all) {|f| f.read}
  cli_pruned = open(file_pruned) {|f| f.read}
  puts cli_all
end

def check_support_cli(file_all, file_support)
  
end

def check_cli(file_arr)
  file_all = file_arr[0]
  file_pruned = file_arr[1]
  file_support = file_arr[2]
  check_pruned_cli(file_all, file_pruned)
  check_support_cli(file_all, file_support)
end

check_cli(file_array)

