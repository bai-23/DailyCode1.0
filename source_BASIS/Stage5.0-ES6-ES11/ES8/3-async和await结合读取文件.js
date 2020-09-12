//1. 引入 fs 模块
const fs = require("fs");

//封装
function read(url) {
    return new Promise((resolve, reject) => {
        fs.readFile(url, (err, data) => {
            //如果失败
            if (err) reject(err);
            //如果成功
            resolve(data);
        })
    })
}

//读取『为学』
// function readWeiXue() {
//     return new Promise((resolve, reject) => {
//         fs.readFile("./resources/为学.md", (err, data) => {
//             //如果失败
//             if (err) reject(err);
//             //如果成功
//             resolve(data);
//         })
//     })
// }
//
// function readChaYangShi() {
//     return new Promise((resolve, reject) => {
//         fs.readFile("./resources/插秧诗.md", (err, data) => {
//             //如果失败
//             if (err) reject(err);
//             //如果成功
//             resolve(data);
//         })
//     })
// }
//
// function readGuanShu() {
//     return new Promise((resolve, reject) => {
//         fs.readFile("./resources/观书有感.md", (err, data) => {
//             //如果失败
//             if (err) reject(err);
//             //如果成功
//             resolve(data);
//         })
//     })
// }

//声明一个 async 函数
async function main(){
    //获取为学内容

    try {
        let weixue = await read("./resources/为学1.md");
        //获取插秧诗内容
        let chayang = await read("./resources/插秧诗.md");
        // 获取观书有感
        let guanshu = await read("./resources/观书有感.md");

        console.log(weixue.toString());
        console.log(chayang.toString());
        console.log(guanshu.toString());
    } catch (e){
        console.log('出错了')
    }


}

main();