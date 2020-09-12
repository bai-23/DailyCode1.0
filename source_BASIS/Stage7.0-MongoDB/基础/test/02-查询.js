//查询
db.stus.insert([
	{name:"song", age:"15"},
	{name:"宋", age:"35"},
	{name:"俊俊", age:"25"},
])
db.stus.find({age:"25"});
//db.collection.find({});
//db.stus.find({age:"25",name:"song"});

db.stus.find({age:"25"}).count();

