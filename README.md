# tronwallet
一个Tron区块链的数字货币钱包
## 编译
1. 安装依赖包：
- qt 5.15.3
- grpc 1.43.2
- protobuf 3.19.4
- libqrencode 4.1.1
- [libsecp256k1](https://github.com/bitcoin-core/secp256k1)

2. 生成protobuf和grpc对应的头文件
```
protoc -I=tron/proto --grpc_out=tron/proto $SRC_DIR tron/proto/api/*.proto
protoc -I=tron/proto --cpp_out=tron/proto $SRC_DIR tron/proto/api/*.proto
protoc -I=tron/proto --cpp_out=tron/proto $SRC_DIR tron/proto/core/*.proto
protoc -I=tron/proto --cpp_out=tron/proto $SRC_DIR tron/proto/core/contract/*.proto
```

3. 进入`qt/translations`目录生成语言包
```
lrelease *.ts
```

4. 生成构建文件
```
qmake tronwallet.pro
```

5. 构建
```
make
```

6. 安装
```
make install
```
## 运行
1. 运行可执行文件`tronwallet`
2. 设置页面填入tron网络中任意**全节点**的IP地址号端口，一般地可以采用如下值：

|        |  主机  |  端口  |
|  ----  |  ----  |  ----  |
|  主网  |  grpc.trongrid.io  |  50051  |
|  shasta测试网  |  grpc.shasta.trongrid.io  |  50051  |

3. 创建或者导入已有钱包，开始交易