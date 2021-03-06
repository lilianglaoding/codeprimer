class GetNextIpAddress
  def getnextaddress(originaladdress)
    tempaddress = originaladdress
    puts "The IP address you input is #{tempaddress}"
    ipvalid = IpIsValid.new
    ipisvalid = ipvalid.valid_ip?(tempaddress)
    if(ipisvalid)
      puts "The next IP address is: "
      ip1,ip2,ip3,ip4 = tempaddress.split('.')
      if(ip4.to_i() != 255)
        puts "#{ip1.to_i()}.#{ip2.to_i()}.#{ip3.to_i()}.#{ip4.to_i()+1}"
      elsif(ip3.to_i() != 255)
        puts "#{ip1.to_i()}.#{ip2.to_i()}.#{ip3.to_i()+1}.0"
      elsif(ip2.to_i() != 255)
        puts "#{ip1.to_i()}.#{ip2.to_i()+1}.0.0"
      elsif(ip1.to_i() != 255)
        puts "#{ip1.to_i()+1}.0.0.0"
      else
        puts "0.0.0.0"
      end
    else
      puts "Illegal IP address!!!"
    end
  end
end

class IpIsValid
  def valid_ip?(address)
  if /\A(\d{1,3})\.(\d{1,3})\.(\d{1,3})\.(\d{1,3})\Z/ =~ address
    puts $~
    str1 = $~
    puts str1
    puts $~.captures
    puts $~.captures.all?
    return $~.captures.all?{|i| i.to_i < 256}
    end
  return false
  end
end

ipaddress = GetNextIpAddress.new
ipaddress.getnextaddress("254.255.255.255")
