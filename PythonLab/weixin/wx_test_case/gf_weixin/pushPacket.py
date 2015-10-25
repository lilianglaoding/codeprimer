#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
        print 'http://%s:%d%s' %('192.168.9.19',8319,'/redPacket/pushPacket')
        

	def tearDown(self):
		self.conn.close()
	
	#测试用例名称必须包含test
	def testApi001(self):
		body='req=[{"cardNo":190000000016903200,"type":1,"packetName":"xiaomi123","useDeadline":25,"rechargeType":125,"limitTimeToUse":18645646,"faceValue":500,"rechargeName":"hotelredpackage"}]'		
		res = commonPostMethod.post(body,"/redPacket/pushPacket")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
               

if __name__ == '__main__':
    unittest.main()