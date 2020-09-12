var mongoose = require('mongoose')
mongoose.connect('mongodb://localhost:27017/my_test', {useNewUrlParser: true, useUnifiedTopology: true});
mongoose.connection.once("open", ()=>{
    console.log('数据库连接成功')
})
//  创建Scheme对象
var Schema = mongoose.Schema
// 创建scheme模式对象
var stuScheme = new Schema({
    name: String,
    age: Number,
    //实际开发中几乎不用布尔值
    gender: {
        type: String,
        default: "female"
    },
    address: String
})
// 通过Scheme来创建Model
// Model代表集合，通过Model才能对数据库进行操作
var StuModel = mongoose.model('student', stuScheme)

// 向数据库插入文档
StuModel.create({
    name: "孙",
    age: 18,
    height:"s" //此项无法插入
}, function(err){
    if (!err){
        console.log('插入成功~~')
    }
})


