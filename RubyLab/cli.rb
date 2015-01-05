cli_all = ""
cli_need_cut = "test
aaa
bbb"
cli_no_need_cut = ""

def str_equal(str, substr)
  if (str == substr)
    break;
  else
    break
  end
end

def cut_off(str, substr)
  str.each_line {|s| str_equal_str(str, substr)}
end

cli_need_cut.each_line {|s| cut_off(cli_all, cli_need_cut)}
