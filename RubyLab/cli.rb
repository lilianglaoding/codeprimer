cli_tree = "test
aaa
bbb
ccc
eee
ddd
"
cli_need_cut = "test
aaa
bbb
ccc
ddd
"
cli_no_need_cut = ""

def str_equal(str, substr)
  if (str == substr)
    puts substr
  end
end

def cut_off(str, substr)
  str.each_line {|s| str_equal(s, substr)}
end

def check_cut_cli(cli_cut, cli_all)
  cli_cut.each_line {|s| cut_off(cli_all, s)}
end

def check_un_cut_cli(cli_no_cut, cli_all)
  cli_no_cut.each_line {|s| cut_off(cli_all, s)}
end

puts "=======Now check the cut cli, the error cli is below======\n"
check_cut_cli(cli_need_cut, cli_tree)

puts "=====Now check the un cut cli, the error cli is below=====\n"
check_un_cut_cli(cli_no_need_cut, cli_tree)
