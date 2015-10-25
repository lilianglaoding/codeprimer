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
	#用来执行单独的body格式的
	#client.request('POST', path, json.dumps(body), {"Content-Type": "x-www-form-urlencoded"})
	#用来执行req=body形式的
	client.request('POST', path, json.dumps(body), {"Content-type": "application/json"})
	res = client.getresponse()
	return res

##Test
# if __name__ == '__main__':
# 	res = post()
# 	print res.status
# 	print res.read()
#res=post('req={"weixinOpenId":"oIXQtLwotdqQ8rbSHNz-bgujUfLA"}','/cash/getCash')
#print res.status