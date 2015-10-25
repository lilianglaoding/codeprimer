#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.14.203',8210)
        print 'http://%s:%d%s' %('192.168.14.203',8210,'/hotelMapping/getAllHotelMapping')
        

	def tearDown(self):
		self.conn.close()
	
	#测试用例名称必须包含test
	def testApi001(self):
		body=''
		res = commonPostMethod.post(body,"/hotelMapping/getAllHotelMapping")
		data = res.read()
		print	res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
               

if __name__ == '__main__':
    unittest.main()