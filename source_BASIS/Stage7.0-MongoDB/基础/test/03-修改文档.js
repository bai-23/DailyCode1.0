//修改

//db.stus.update({name:"song"}, {age:28});

//$set
db.stus.update(
				{name: "宋宋"}, 
				{$set:{
					name:"宋"
				}},
				{$unset:{
					age:"25"
				}});
							
db.stus.find({})