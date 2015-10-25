#-*- coding:utf-8 -*-
import unittest
import urllib, urllib2,httplib,json
import commonGetMethod
import sys
#import Mysqlfunction
#import random
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):
	
	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
        print 'http://%s:%d%s' %('192.168.9.19',8319,'/QRCode/scanStatistics')
        

	def tearDown(self):
		self.conn.close()
	
	
	def testApi001(self):
		
		res = commonGetMethod.get(self.conn,'GET','/QRCode/scanStatistics','?scanType=2&startDate=2015-07-20&endDate=2015-07-26&sceneId=3')
		data = res.read()
		print data
		print	res.status
		self.assertEqual(res.status, 200 )
		
		
               

if __name__ == '__main__':
    unittest.main()