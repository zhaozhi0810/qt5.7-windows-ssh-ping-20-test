开发环境Qt5.7.1 + MinGW

2022-12-09
1.进入QSshTest
2.使用QSshTest.pro打开。
3.本项目还是半成品，功能有，但是不完善。


2023-05-19
1.增加设置打包的字节数的功能，在设置页
2.生成可执行程序，需要 QSshT\QSsh\QSsh\lib目录下的ssh库文件。
3.把exe文件放到一个空的目录中，比如debug目录，然后运行qt5.7的cmd命令提示符窗口
   执行windeployqt.exe QSshTest.exe  这时依赖的文件全部复制到这里了，
   然后把需要的ssh库文件复制过来
4.使用打包工具完成打包即可，双击能正常运行就可以了。
5.增加一个调试信息的页面




2023-05-24
1.增加从电脑ping设备的方法。
2.解决windows中文乱码，不能解析的问题