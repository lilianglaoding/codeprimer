path = "test.txt"
port = open(path)
    begin
	port.each_line {|line|
	     p line.to_s
	}
	ensure
	    port.close
    end
    p "--------------------------"
    $KCODE = 'u'
    port = open(path)
    begin
    port.each_line {|line|
    p line.to_s
    }
    ensure
    port.close
    end
