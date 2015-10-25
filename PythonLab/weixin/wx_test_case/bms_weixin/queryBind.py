
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
        print 'http://%s:%d%s' %('192.168.14.203',8210,'/userMapping/queryBind')
        

	def tearDown(self):
		self.conn.close()
	
	
	def testApi001(self):
		body='req={"OpenId":"oPvJdswfwe2Cl-hTEiJuuJ7EkQF8"}'
		res = commonPostMethod_req.post(body,"/userMapping/queryBind")
		data = res.read()
		print data
		print	res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
               

if __name__ == '__main__':
    unittest.main()