file_cli_all = "all"
file_cli_pruned = "purned"
file_cli_support = "support"

file_array = [file_cli_all, file_cli_pruned, file_cli_support]

def string_replace(str)
  str.gsub(/<.*?>/, '<1>')
end

def file_replace(file)
  if (File.file?(file))
    str = open(file) {|f| string_replace(f.read)}
    open(file, "w") {|f| f.puts str}
  else
    puts "File #{file} dosen't exist!"
  end
end

def file_process(file_arr)
  for file in [file_arr]
    file_replace(file.to_s)
  end
end

file_process(file_array)

