// 一对一关系

db.wifeAndHusband.insert([
    {
        name: "黄蓉",
        husband: {
            name: "郭靖"
        }
    },{
        name: "潘金莲",
        husband: {
            name: "武大郎"
        }
    }	
])

db.wifeAndHusband.find()

//一对多   用户和订单
db.users.insert([
	{username:"swk"},
	{username:"zbj"}
])

db.order.insert({
    list: ["牛肉"],
    user_id: ObjectId("5f5ca77d736c0000f000a0f8")
})
db.users.find()
db.order.find()

var user_id = db.users.findOne({username: "swk"})._id
db.order.find({user_id:user_id})

// 多对多  老师-学生
db.teachers.insert([
	{name:"洪七公"},
	{name:"黄大陷"},
	{name:"龟仙人"}
])
//db.teachers.find()
db.stus.insert([
	{
		name:"哥哥",
		teacher_id: [
				ObjectId("5f5cab66736c0000f000a0fe"),
				ObjectId("5f5cab66736c0000f000a0ff")
		]
	},{
		name:"孙悟空",
		teacher_id: [
				ObjectId("5f5cab66736c0000f000a0fe"),
				ObjectId("5f5cab66736c0000f000a0ff"),
				ObjectId("5f5cab66736c0000f000a100")
		]
	}
])
db.stus.find()





