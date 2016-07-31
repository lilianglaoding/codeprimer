str = ":type => :vBNG"
fenix_type = $1 if str =~ /:type\s*=>\s*:(\w+)/
puts fenix_type