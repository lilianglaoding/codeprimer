import logging
class log(logging):
	def __init__(self):
		log.basicConfig(level=log.INFO,
                	format='%(asctime)s %(filename)s[line:%(lineno)d] %(levelname)s %(message)s',
                	datefmt='%a, %d %b %Y %H:%M:%S',
                	filename='myapp.log',
                	filemode='w')
