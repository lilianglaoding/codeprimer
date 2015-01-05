cli_all = "test
aaa
bbb
ccc"
cli_need_cut = "test
aaa
bbb
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

cli_need_cut.each_line {|s| cut_off(cli_all, s)}
