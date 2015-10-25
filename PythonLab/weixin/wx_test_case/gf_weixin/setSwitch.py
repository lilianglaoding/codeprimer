import unittest
import urllib, urllib2,httplib,json
import commonGetMethod
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):
	print 'http://%s:%d%s' %('192.168.9.19',8319,'/MultichatSatisfy/setSwitch')
	
	def setUp(self):
		
		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
		print 'http://%s:%d%s' %('192.168.9.19',8319,'/MultichatSatisfy/setSwitch')
		url = ''

	def tearDown(self):
		self.conn.close()

	def testApi001(self):
		
		path = '/MultichatSatisfy/setSwitch/2'

		getValues = ""
		print 'http:192.168.9.19:8319%s%s' %(path, getValues)

		res = commonGetMethod.get(self.conn,'GET',path,getValues)
		data = res.read()
		li = json.loads(data)
		print data
		print res.status
		self.assertEqual(res.status, 200 )
		self.assertEqual(li['retcode'], 0)
		#self.assertEqual(li['error_info'], "")

	def testApi002(self):
		
		path = '/MultichatSatisfy/setSwitch/1'

		getValues = ""
		print 'http:192.168.9.19:8319%s%s' %(path, getValues)

		res = commonGetMethod.get(self.conn,'GET',path,getValues)
		data = res.read()
		li = json.loads(data)
		print data
		print res.status
		self.assertEqual(res.status, 200 )
		#self.assertEqual(li['rep_code'], '0')
		#self.assertEqual(li['error_info'], "")

if __name__ == '__main__':
    unittest.main()