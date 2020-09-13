var mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/my_test', {useNewUrlParser: true, useUnifiedTopology: true});
mongoose.connection.once("open", ()=>{
    console.log('数据库连接成功')
})
var Schema = mongoose.Schema
var stuScheme = new Schema({
    name: String,
    age: Number,
    gender: {
        type: String,
        default: "female"
    },
    address: String
})
var StuModel = mongoose.model('student', stuScheme)

// 插入
/*StuModel.create([
    {
    name: "猪八戒",
    age: 18,
    gender: "male",
    address: "sss"
},{
    name: "孙悟空",
    age: 52,
    gender: "female",
    address: "瑟瑟发抖是"
}], function(err){
    if (!err){
        console.log('插入成功~~')
        // console.log(arguments)
    }
})*/
//  查询
/*StuModel.find({name:"猪八戒"}, function(err, docs){
    if (!err){
        console.log(docs[0])
    }
})*/
/*StuModel.find({}, "name age -_id", {skip:3, limit:1}, function (err, docs){
    if (!err){
        // console.log(docs)
        console.log(docs instanceof StuModel)
    }
})*/
// 改
StuModel.updateOne({name:"孙悟空"}, {$set: {age: 20}, }, function (err){
    if (!err){
        console.log('修改成功')
    }
})
// 删
// ...

