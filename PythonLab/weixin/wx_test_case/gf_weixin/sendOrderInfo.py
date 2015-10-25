# -*- coding:utf-8 -*-
import unittest
import urllib, urllib2,httplib,json
import commonPostMethod
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )

class mytest(unittest.TestCase):

	def setUp(self):

		self.conn = httplib.HTTPConnection('192.168.9.19',8319)
        print 'http://%s:%d%s' %('192.168.9.19',8319,'/pushOrder/sendOrderInfo')
        

	def tearDown(self):
		self.conn.close()
	
	#confirm order确认订单
	def testApi001(self):
		body='req={OrderData:{"arriveDate":1436656204,"cardNo":"190000000035424680","createTime":1436874588,"currency":"$","freeConfirm":true,"guaranteeType":1,"guestList":["zha单独n"],"hotelAddress":"inbeijing","hotelName":"hotelofbeijing","hotelTel":"010-22111212","leaveDate":1436915404,"notesToHotel":"dacgyagbfabg","openId":"","orderStatus":"A","payment":0,"ratePlan":"tehuihanzao","reserveNo":"1002102010","roomCount":2,"roomTypeNames":["dachuangfang"],"sumPrice":1429.8722,"timeEarly":13,"timeLate":20,"timelyConfirm":false},"orderTemplateType":"Order_Confirm"}'
		res = commonPostMethod.post(body,"/pushOrder/sendOrderInfo")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
	#delete order
	def testApi002(self):
		body='req={OrderData:{"arriveDate":1436656204,"cardNo":"190000000035424680","createTime":1436874588,"currency":"$","freeConfirm":true,"guaranteeType":1,"guestList":["sdf","sdf","sdfs"],"hotelAddress":"ddddd","hotelName":"ddddd","hotelTel":"010-22111212","leaveDate":1436915404,"notesToHotel":"ddddd","openId":"","orderStatus":"A","payment":0,"ratePlan":"ddd","reserveNo":"1002102010","roomCount":2,"roomTypeNames":["ddd","dd"],"sumPrice":1429.8722,"timeEarly":13,"timeLate":20,"timelyConfirm":false},"orderTemplateType":"Order_Cancel"}'
		res = commonPostMethod.post(body,"/pushOrder/sendOrderInfo")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
	#unice order
	def testApi003(self):
		body='req={OrderData:{"arriveDate":1436656204,"cardNo":"190000000035424680","createTime":1436874588,"currency":"#","guaranteeType":0,"guranteeValue":158.2221,"hotelAddress":"rrr","hotelName":"rr","leaveDate":1436915404,"openId":"","reserveNo":"1000111","roomCount":1,"roomTypeNames":["rr"]},"orderTemplateType":"AuthorizedUnfreeze"}'
		res = commonPostMethod.post(body,"/pushOrder/sendOrderInfo")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
	#refuse order
	def testApi004(self):
		body='req={OrderData:{"cardNo":"190000000035424680","currency":"#","hotelAddress":"fff","hotelName":"fff","openId":"","paymentDate":2,"refundAccount":"fff","refundValue":158.2221,"reserveNo":"1000111"},"orderTemplateType":"OrderRefund"}'
		res = commonPostMethod.post(body,"/pushOrder/sendOrderInfo")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )
     
	#nopay order
	def testApi005(self):
		body='req={OrderData:{"arriveDate":1436656204,"cardNo":"190000000035424680","createTime":1436874588,"currency":"$","guestList":["dd"],"hotelAddress":"dd","hotelName":"ff","leaveDate":1436915404,"openId":"","reserveNo":"1000111","roomTypeNames":["gg"],"sumPrice":186},"orderTemplateType":"RemindPay"}'
		res = commonPostMethod.post(body,"/pushOrder/sendOrderInfo")
		data = res.read()
		print	"the status is ",res.status
		self.assertEqual(res.status, 200 )
		js = json.loads(data,encoding='utf-8')
		self.assertEqual(js["retcode"], 0 )        
if __name__ == '__main__':
    unittest.main()