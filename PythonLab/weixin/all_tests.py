#encoding:utf-8

"Combine tests for gnosis.xml.objectify package (req 2.3+)"

import unittest
import time
import sys
reload(sys)
sys.setdefaultencoding( "utf-8" )
# sys.path.append("PMT_test_case")
# #这里需要导入测试文件
# from PMT_test_case import *
import HTMLTestRunner
import allcase_list

#将用例组建成数组
alltestnames = allcase_list.caselist()
#定义一个testsuite
suite = unittest.TestSuite()

if __name__ == '__main__':
	# 这里我们可以使用defaultTestLoader.loadTestsFromNames(),
	# 但如果不提供一个良好的错误消息时，它无法加载测试
	# 所以我们加载所有单独的测试，这样将会提高脚本错误的确定。
	i=1
	for test in alltestnames:
		try:
			#最关键的就是这一句，循环执行数据行中的用例。
			print i
			#用loadTestsFromName(test)把test名字里面所有的test开头的测试用例都加载到testsuite上
			suite.addTest(unittest.defaultTestLoader.loadTestsFromName(test))
			i+=1
		except Exception:
			print 'ERROR: Skipping tests from "%s".' %test

			try:
				__import__(test)
			except ImportError:
				print 'Could not import the test moudle.'
			else:
				print 'Could not load the test suite.'
			#全面捕获异常信息，打印堆栈信息
			from traceback import print_exc
			print_exc()
	print
	print 'Runnint the tests...'

	# 输出测试报告，从这里开始都是htmltestrunner起作用，来执行testsuite
	t = time.strftime('%Y-%m-%d-%H-%M',time.localtime(time.time()))
	filename = 'report/Report%s.html' %(t)
	fp = file(filename, 'wb')

# 生成测试报告，报告名称和报告描述可根据项目更改
runner = HTMLTestRunner.HTMLTestRunner(
	stream=fp,
	title='官方微信接口自动化测试报告',
	description='Autotest is good.')
#通过htmltestrunner的run方法执行unittest.main()方法，开始执行测试。unittest.TestProgram.runTests(self)
runner.run(suite)
