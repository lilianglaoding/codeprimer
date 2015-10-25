#encoding:utf-8

import httplib,urllib
import json
#http://192.168.14.203:8210/hotelMapping/getAllHotelMapping
def post(body, url):
	server = '192.168.14.203'
	port = 8210
	path = url
	body = body
	client = httplib.HTTPConnection(server, port)
	client.request('POST', path, body, {"Content-type": "application/x-www-form-urlencoded"})
	res = client.getresponse()
	return res

##Test
# if __name__ == '__main__':
# 	res = post()
# 	print res.status
# 	print res.read()
#res=post('req={"weixinOpenId":"oIXQtLwotdqQ8rbSHNz-bgujUfLA"}','/cash/getCash')
#print res.status