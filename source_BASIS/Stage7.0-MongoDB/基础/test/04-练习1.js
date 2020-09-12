//练习一

use my_test

// 2.插入文档
db.users.insert({
    username: "sun"
})

//3.查询user集合中的文档
db.users.find()
// 4.向user插入一个文档
db.users.insert({
    username: "bajie"
})
// 5.统计users文档数量
db.users.find().count()

db.users.find({
    username: "sun"
})
db.users.update({
    username: "sun"
}, {
    $set: {
        address: "花果山"
    }
})
// 6.用tang替换bajie
db.users.replaceOne({
    username: "bajie"
}, {
    username: "tang"
})
// 7.删除address属性
db.users.update({
    username: "sun"
}, {
    $unset: {
        address: " "
    }
})
// 8.插入数组对象
// 注意：MongoDB文档中的属性值也可以是一个文档
db.users.update({
    username: "sun"
}, {
    $set: {
        hobby: {
            cities: ["beijing", "shanghai"],
            movies: ["sanguo", "jinpingmei"]
        }
    }
})
db.users.update({
    username: "tang"
}, {
    $set: {
        hobby: {
            movies: ["chinese", "ssss"]
        }
    }
})

// 9.查询喜欢电影sanguo的文档
db.users.find({
    "hobby.movies": "sanguo"
})

// 10.向tang中添加一个新的电影Inter
db.users.update({
    username: "tang"
}, {
    $push: {
        "hobby.movies": "Inter"
    }
})

// 11.删除喜欢beijing的用户
db.users.remove({"hobby.cities": "beijing"})
db.users.remove({username:"sun"})

// 12.删除user集合
db.users.remove({})
db.users.drop()


// 13.向numbers插入2w条数据 20s
// 方法一：	效率低
for(var i=1; i<=20000; i++){
	db.numbers.insert({num: 1})

}
//show collections
//db.numbers.find().count()

db.numbers.remove({})  //0.3s
// 方法二：一次性插入2w条数据  0.68s
var arr = []
for(var i=1; i<=20000; i++){
	arr.push({num:i})
}
db.numbers.insert(arr)


