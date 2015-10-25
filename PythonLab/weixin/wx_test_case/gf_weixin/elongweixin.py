# -*- coding:utf-8 -*-
#http://wxtest.corp.elong.com/elongweixin
import httplib,urllib
import json
import unittest
import urllib, urllib2,httplib,json
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

#添加解析xml的函数
from xml.etree import ElementTree as ET 
def findelement(node,result):
	#从字符串获取xml数据源
	root=ET.fromstring(node)
	#搜索到Content标签的所有节点列表
	p=root.findall("Content")
	#打印节点的text信息，并且查看室友包含result
	result=p[0].text.index(result)
	return result

def post(body, url):
	server = 'wxtest.corp.elong.com'
	port = 8080
	path = url
	body = body
	client = httplib.HTTPConnection(server)
	#client.request('POST', path, json.dumps(body), {"Content-Type": "text/plain"})
	client.request('POST', path, body, {"Content-Type": "text/plain"})
	#client.request('POST', path, body, {"Content-type": "application/x-www-form-urlencoded"})
	res = client.getresponse()
	return res


class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('wxtest.corp.elong.com')
        print 'http://%s:%d%s' %('wxtest.corp.elong.com',8080,'/elongweixin')
        

	def tearDown(self):
		self.conn.close()
	
	def testApi001(self):
		#生成xml的body
		body=r'<xml><ToUserName>gh_6a1c9a1a647b</ToUserName><FromUserName>otUzcszzjZwwpJCuxL61R3TXHchA</FromUserName><CreateTime>1348831960</CreateTime><MsgType>text</MsgType><Content>test</Content><MsgId>61501434200260658</MsgId></xml>'
		#body={"ToUserName":"gh_6a1c9a1a647b","FromUserName":"otUzcszzjZwwpJCuxL61R3TXHchA","CreateTime":1348831960,"MsgType":"text","Content":"test","MsgId":61501434200260658}
		print body
		res = post(body,"/elongweixin")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		self.assertEqual(findelement(data,'您'),24)
		from traceback import print_exc
		logging.info('http://%s:%d%s' %('wxtest.corp.elong.com',8080,'/elongweixin'))
		logging.info(res.status)
		logging.error(print_exc())
               

if __name__ == '__main__':
    unittest.main()