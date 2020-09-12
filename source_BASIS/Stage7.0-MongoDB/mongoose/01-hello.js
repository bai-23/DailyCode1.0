//  1.引入模块
var mongoose = require("mongoose")
//  2.连接MongoDB数据库
mongoose.connect('mongodb://localhost:27017/my_test', {useNewUrlParser: true, useUnifiedTopology: true});
//  3. 监听数据库连接状态
//数据库连接事件
mongoose.connection.once("open", function (){
    console.log('数据库连接成功！')
})
//数据库关闭事件
mongoose.connection.once("close", function (){
    console.log('数据库断开连接！')
})

//  4.断开数据库连接
// mongoose.disconnect()