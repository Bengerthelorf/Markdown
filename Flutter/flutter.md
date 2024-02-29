# flutter

```dart
import 'package:flutter/material.dart';
import 'tabs/Home.dart';
import 'tabs/Category.dart';
import 'tabs/Setting.dart';

class Tabs extends StatefulWidget {
  final index;
  Tabs({Key key, this.index = 0}) : super(key: key);

  @override
  _TabsState createState() => _TabsState(this.index);
}

class _TabsState extends State<Tabs> {
  int _currentIndex = 0;
  _TabsState(index) {
    this._currentIndex = index;
  }
  // 把页面存放到数组里
  List _pageList = [
    HomePage(),
    CategoryPage(),
    SettingPage(),
  ];
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('首页'),
      ),
      body: this._pageList[this._currentIndex],
      bottomNavigationBar: BottomNavigationBar(
        // 默认选中第几项
        currentIndex: this._currentIndex,
        // 导航栏点击获取索引值
        onTap: (int index) {
          setState(() {
            this._currentIndex = index;
          });
        },
        // iconSize: 30.0, //icon的大小
        fixedColor: Colors.red, //选中的颜色
        type: BottomNavigationBarType.fixed, //配置底部tabs可以有多个按钮
        //定义导航栏的图片+名称
        items: [
          BottomNavigationBarItem(icon: Icon(Icons.home), title: Text("首页")),
          BottomNavigationBarItem(
              icon: Icon(Icons.category), title: Text("分类")),
          BottomNavigationBarItem(
              icon: Icon(Icons.settings), title: Text("设置")),
        ],
      ),
      // 这里是核心代码
      drawer: Drawer(
        child: Column(
          children: <Widget>[
            Row(
              children: <Widget>[
                Expanded(
                    child: UserAccountsDrawerHeader(
                  accountName: Text("任我行RQ"),
                  accountEmail: Text("www.1342134929@qq.com"),
                  currentAccountPicture: CircleAvatar(
                    backgroundImage: NetworkImage(
                        "http://sucai.suoluomei.cn/sucai_zs/images/20200226173152-1.jpg"),
                  ),
                  decoration: BoxDecoration(
                      image: DecorationImage(
                    image: NetworkImage(
                        "http://sucai.suoluomei.cn/sucai_zs/images/20200226173152-1.jpg"),
                    fit: BoxFit.cover,
                  )),
                ))
              ],
            ),
            ListTile(
              leading: CircleAvatar(
                child: Icon(Icons.home),
              ),
              title: Text("我的空间"),
              onTap: () {
                Navigator.of(context).pop(); //隐藏侧边栏
                Navigator.pushNamed(context, '/NavBar'); //路由的跳转
              },
            ),
            Divider(),
            ListTile(
              leading: CircleAvatar(
                child: Icon(Icons.people),
              ),
              title: Text("用户中心"),
            ),
            Divider(),
            ListTile(
              leading: CircleAvatar(
                child: Icon(Icons.settings),
              ),
              title: Text("设置中心"),
            ),
          ],
        ),
      ),
    );
  }
}
```
