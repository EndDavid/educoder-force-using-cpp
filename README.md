## Description
提供一种在头歌实践教学平台上要求提交C语言代码时，绕过限制提交C++代码的方法。

## Usage
克隆仓库
```
git clone https://github.com/EndDavid/educoder-force-using-cpp/
cd educoder-force-using-cpp
```
在IDE中编辑`cppcode.cpp`并保存，执行`codevar_generator`创建`cppcode[]`变量：
```powershell
.\codevar_generator
```
将生成出来的`codevar.c`复制粘贴到`code_submit.c`中，然后在头歌平台上提交该代码即可。

相关文件中已用注释标记清楚。
