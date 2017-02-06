### 导入
***

1. 把`SKYDESDK.framework`文件添加到你的工程。
2. `TARGETS -> Build Settings -> Other Linker Flags`选项中**增加两个参数**`-Objc`和`-all_load`。如下图所示：

	![](https://github.com/sunyawang/sywimgs/blob/master/framework-config-1.png?raw=true)



### 使用

***

#### Importing

	#import <SKYDESDK/SKYDESDK.h>

#### API

所有的API使用方法请直接看`SKYDEManger.h`中的注释。

#### 注意事项

本SDK大部分回调都在子线程中，请不要在回调中直接刷新UI。

### END