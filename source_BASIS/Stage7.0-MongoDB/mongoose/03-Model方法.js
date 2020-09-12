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

StuModel.create([
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
        console.log(arguments)
    }
})



