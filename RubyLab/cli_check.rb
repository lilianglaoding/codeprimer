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


