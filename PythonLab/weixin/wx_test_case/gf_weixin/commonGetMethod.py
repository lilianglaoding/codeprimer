#encoding:utf-8
import json
import httplib
def get(conn, method, path,getValues):
		conn.request(method, path + getValues)
		res = conn.getresponse()
		print res.status
		print res.reason
		# data = res.read()
		# print data
		# li = json.loads(data)
		# print li['step']
		# print li['trans_operation_info_list'][0]
		# return li['step']
		return res