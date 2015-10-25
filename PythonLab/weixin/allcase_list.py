#encoding:utf-8

# 测试用例执行管理
# 用例的目录结构 项目名字/接口名字/执行的py文件名/py文件的类名
# 用例添加格式  文件夹.文件夹.文件名(去掉py).类名
# 例1： PMT_test_case.CridetCard.test_Cridetcard.Testcard
# 例2： PMT_test_case.demotest.Test
#
# 注意新添加的测试接口的文件夹下要添加__init__.py文件，文件为空即可。否则会添加不到你的模块

def caselist():
	alltestnames = [
	###case of weixin
	'wx_test_case.gf_weixin.getCash.mytest',
	'wx_test_case.gf_weixin.getAll.mytest',
	'wx_test_case.gf_weixin.insertMessageRecord.mytest',
	'wx_test_case.gf_weixin.insertMuitichatSatisfy.mytest',
	'wx_test_case.gf_weixin.updateMultichatSatisfy.mytest',
	'wx_test_case.gf_weixin.getBind.mytest',
	'wx_test_case.gf_weixin.getOrder.mytest',
	'wx_test_case.gf_weixin.getInfoByCityName.mytest',
	'wx_test_case.gf_weixin.pushPacket.mytest',
	'wx_test_case.gf_weixin.setSwitch.mytest',
	'wx_test_case.gf_weixin.sendPacketOverdue.mytest',
	'wx_test_case.gf_weixin.elongweixin.mytest',
	'wx_test_case.gf_weixin.scanStatistics.mytest',
	
	###case of bmsweixin
	'wx_test_case.bms_weixin.getAllHotelMapping.mytest',
	'wx_test_case.bms_weixin.getHotelMapperInfoByOpenId.mytest',
	'wx_test_case.bms_weixin.insertHotelOrderOperateInfo.mytest',
	'wx_test_case.bms_weixin.updateHotelOrderOperateInfo.mytest',
	'wx_test_case.bms_weixin.getOrderOperateInfoBySerialNo.mytest',
	'wx_test_case.bms_weixin.unbind.mytest',
	'wx_test_case.bms_weixin.unbindFromMapi.mytest',
	'wx_test_case.bms_weixin.getOrderOperateInfoBySerialNo.mytest',
	'wx_test_case.bms_weixin.findAll.mytest',
	'wx_test_case.bms_weixin.bind.mytest',
	'wx_test_case.bms_weixin.queryBind.mytest',
	
	

	]
	print "success read case list success!"
	return alltestnames
