#-*- coding:utf-8 -*-

import unittest
import urllib, urllib2,httplib,json
import commonPostMethod
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )
#添加日志
import logging
logging.basicConfig(level=logging.INFO,
                	format='%(asctime)s %(filename)s[line:%(lineno)d] %(levelname)s %(message)s',
                	datefmt='%a, %d %b %Y %H:%M:%S',
                	filename='myapp.log',
                	#a表示续写，w表示覆盖写入
                	filemode='a')


class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
        print 'http://%s:%d%s' %('192.168.9.19',8319,'/keyword/getAll')
        

	def tearDown(self):
		self.conn.close()
	
	#测试用例名称必须包含test
	def testApi001(self):
		body='req={"level":1}'
		res = commonPostMethod.post(body,"/keyword/getAll")
		data = res.read()
		print	res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
		from traceback import print_exc
		logging.info('http://%s:%d%s' %('192.168.9.19',8319,'/keyword/getAll'))
		logging.info(res.status)
		logging.error(print_exc())

		

if __name__ == '__main__':
    unittest.main()