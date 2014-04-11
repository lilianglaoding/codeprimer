=begin
p 'abcabc'.gsub(/b/,'(\&)')
p 'abcabc'.gsub(/b/,'(\0)')
p 'abcabc'.gsub(/b/,'(\')')
p 'abcabc'.gsub(/b/,'(\+)')
p 'abcabc'.gsub(/b/,'($`)')
p 'abcabc'.gsub(/b/,'($+)')
=end

p 'abcabc'.gsub(/b/,'(\&)')
p 'abcabc'.gsub(/b/) {|s| s.upcase}
p "i love you".include?("love")