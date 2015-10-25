#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod

class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
		print "***testing getCash.py***"""
        print 'http://%s:%d%s' %('192.168.9.19',8319,'/cash/getCash')

	def tearDown(self):
		self.conn.close()
	
	
	def testApi001(self):
		body='req={"weixinOpenId":"oIXQtLwotdqQ8rbSHNz-bgujUfLA"}'
		res = commonPostMethod.post(body,"/cash/getCash")
		data = res.read()
		print data
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
               

if __name__ == '__main__':
    unittest.main()
