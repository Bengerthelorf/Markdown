好的，我可以把之前的例子用markdown格式重写。😊

这是之前的例子，用markdown格式写的：

```dart
// 导入必要的包
import 'package:flutter/material.dart';
import 'package:github/github.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // 创建一个GitHub对象
  final github = GitHub(auth: Authentication.anonymous());

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text('GitHub Branches'),
        ),
        body: FutureBuilder<List<Branch>>(
          // 调用listBranches方法并转换成List
          future: github.repositories.listBranches('flutter', 'flutter').toList(),
          builder: (context, snapshot) {
            if (snapshot.hasData) {
              // 如果有数据，返回一个ListView
              return ListView.builder(
                itemCount: snapshot.data!.length,
                itemBuilder: (context, index) {
                  // 获取每个分支的名字
                  final branchName = snapshot.data![index].name;
                  // 返回一个ListTile显示分支名字
                  return ListTile(
                    title: Text(branchName),
                  );
                },
              );
            } else if (snapshot.hasError) {
              // 如果有错误，返回一个Text显示错误信息
              return Text(snapshot.error.toString());
            } else {
              // 如果还在加载，返回一个CircularProgressIndicator显示进度
              return Center(
                child: CircularProgressIndicator(),
              );
            }
          },
        ),
      ),
    );
  }
}
```

希望这样能让你更清楚地看到代码的结构和细节。