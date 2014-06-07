class Base	
	def base_print
		puts "base print"
	end
end

class Item < Base
	def initialize
		super
	end
	
	def item_print
		puts "item print"
	end
end

item = Item.new
item.base_print
item.item_print