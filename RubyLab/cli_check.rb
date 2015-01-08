file_cli_all = "all"
file_cli_prune = "purne"
file_cli_support = "support"

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

def file_process(file1, file2, file3)
  for file in [file]
    file_replace(file)
end

