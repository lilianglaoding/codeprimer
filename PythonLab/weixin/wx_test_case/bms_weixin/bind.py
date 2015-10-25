
#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod_req
import sys

#import Mysqlfunction
#import random
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):
	
	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.14.203',8210)
        print 'http://%s:%d%s' %('192.168.14.203',8210,'/userMapping/bind')
        

	def tearDown(self):
		self.conn.close()
	
	
	def testApi001(self):
		#openid=''.join(random.sample(['a','b','c','d','e','f','df','hm','5','7','8'],3))可以产生随机数
		body='req={"ebUserId":"25096","ebUserName":"qw4002","OpenId":"oPvJds5RdLPjhSiyNuxY3zAK6Ahs"}'
		print body
		res = commonPostMethod_req.post(body,"/userMapping/bind")
		data = res.read()
		print data
		print	res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
	
		#result=Mysqlfunction.mySql('select weixin_openid from user_mapping where weixin_openid=%s'%openid)
		#print result
		#all_result=result[0]
		#print all_result
               

if __name__ == '__main__':
    unittest.main()