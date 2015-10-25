
#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod_req
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.14.203',8210)
        print 'http://%s:%d%s' %('192.168.14.203',8210,'/update/insertHotelOrderOperateInfo')
        

	def tearDown(self):
		self.conn.close()
	
	#测试用例名称必须包含test
	def testApi001(self):
		body='req={"groupId":"21","hotelId":"1299321","hotelName":"北京饭店","reserveType":"1","reserveNo":"12321321","serialNo":"1231","arriveDate":"2015-05-06 00:00:00","leaveDate":"2015-05-07 00:00:00","roomTypeId":"101","operationType":1,"operationInfo":"操作","orderStatus":"V","reserveStatus":1,"orderDetail":"aqwsdjashjkjas","handleStatus":2,"lastOperator":"neo"}'
		res = commonPostMethod_req.post(body,"/order/updateHotelOrderOperateInfo")
		data = res.read()
		print	res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
               

if __name__ == '__main__':
    unittest.main()