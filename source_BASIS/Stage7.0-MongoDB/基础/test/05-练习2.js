// 14.查询num中num为500的文档
db.numbers.find({num: 500})

// 15.查询大于500的文档
db.numbers.find({num:{$gt:500}})

// 16. 40<=num<=50
db.numbers.find({num:{$gt:40, $lt:50}})

// 17.前10条数据
//db.numbers.find({num:{$lte:10}})
db.numbers.find().limit(10)

// 18.11~20
db.numbers.find().skip(10).limit(10)

db.numbers.find().limit(10).skip(10)



