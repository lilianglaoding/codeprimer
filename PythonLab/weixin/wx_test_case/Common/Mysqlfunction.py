#coding=utf-8
import MySQLdb
def mySql(sql):
	try :
		conn = MySQLdb.connect(host='192.168.14.203',user='root',passwd='abc123',db='hotel_passport',port=3306)
		cur = conn.cursor()
		datanumber = cur.execute(sql)
		data=cur.fetchall()
		return data
		
	except MySQLdb.Error, e:
		print "Mysql Error %d: %s" % (e.args[0], e.args[1])