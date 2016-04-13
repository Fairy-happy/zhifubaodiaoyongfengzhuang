# zhifubaodiaoyongfengzhuang

  注意事项
  <br>
    1.导入静态库之后如果提示<openssl/...>文件找不到，请更改Header Search Paths 里面的相对路径，具体方法是查找的openssl文件夹的路径，
    然后复制工程文件夹之后到openssl文件夹的上一级文件之间的地址，拼接成"$(PROJECT_DIR)/..."这种形式，
    ...表示工程文件夹之后到openssl文件夹的上一级文件之间的地址
    <br>
    2.如果base64.h文件夹报错，强制文件内导入#import <Foundation/Foundation.h>
