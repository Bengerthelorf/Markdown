用PopupMenuButton的话，你可以参考这个示例代码¹：

```dart
import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      // Enable Material 3 by setting useMaterial3 to true
      theme: ThemeData(useMaterial3: true),
      home: const MyHomePage(),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({Key? key}) : super(key: key);

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {

  // The list of items for the popup menu
  final List<String> _fruits = ['Apple', 'Banana', 'Cherry', 'Durian'];

  // The current selected item
  String? _selectedFruit;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('PopupMenuButton Example'),
        actions: [
          // implement the popup menu button
          PopupMenuButton<String>(
            onSelected: (String value) {
              setState(() {
                _selectedFruit = value;
              });
            },
            itemBuilder: (BuildContext ctx) => _fruits.map<PopupMenuItem<String>>((String value) {
              return PopupMenuItem<String>(
                value: value,
                child: Text(value),
              );
            }).toList(),
          )
        ],
      ),
      body: Center(
        // display the result
        child: Text(_selectedFruit ?? 'Nothing selected',
          style: const TextStyle(
            fontSize: 24,
          )),
      ),
    );
  }
}
```

Source: Conversation with Bing, 3/20/2023(1) Flutter: PopupMenuButton example - Kindacode. https://www.kindacode.com/article/flutter-popupmenubutton/ Accessed 3/20/2023.
(2) Flutter Popup Menu Button Example Tutorial – CODES INSIDER. https://codesinsider.com/flutter-popup-menu-button/ Accessed 3/20/2023.
(3) How to implement PopUpMenuButton in Flutter. https://flutterguide.com/how-to-implement-popupmenubutton-in-flutter/ Accessed 3/20/2023.
(4) Flutter Popup Menu Button Detailed Customization With Example-2022 .... https://letmeflutter.com/flutter-popup-menu-button-detailed-customization-with-example/ Accessed 3/20/2023.

你能否把以下代码中的popupmenubotton移到右侧而把branchcard放在中间？我试了很多方法，但是没有成功。谢谢你。

```dart
import 'package:flutter/material.dart';

class GithubPage extends StatefulWidget {
  @override
  State<GithubPage> createState() => _GithubPageState();
}

class _GithubPageState extends State<GithubPage> {
  final List<String> _fruits = ['Apple', 'Banana', 'Cherry', 'Durian'];
  String? _selectedFruit;

  @override
  Widget build(BuildContext context) {

    return Scaffold(
      body: Column(
        children: [

          PopupMenuButton<String>(
            onSelected: (String value) {
              setState(() {
                _selectedFruit = value;
              });
            },
            itemBuilder: (BuildContext ctx) => _fruits.map<PopupMenuItem<String>>((String value) {
              return PopupMenuItem<String>(
                value: value,
                child: Text(value),
              );
            }).toList(),
          ),
          BranchCard(),

        ],
      ),
    );
  }
}


class BranchCard extends StatelessWidget {
  const BranchCard({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    var theme = Theme.of(context);
    var style = theme.textTheme.displayLarge!.copyWith(
    color: theme.colorScheme.onSecondary,
    );

    return Card(
      color: theme.colorScheme.secondary,
      child: Column(
        children: [
          Text(
            'Branch Card',
            style: style.copyWith(fontWeight: FontWeight.w200),

          ),
        ],
      ),
    );
  }
}
```

```dart
    return Scaffold(
  body: Stack(
    children: [
      Positioned(
        top: 0,
        right: 0,
        child: Text('右上'),
      ),
      Positioned(
        left: MediaQuery.of(context).size.width / 2 - 50,
        top: MediaQuery.of(context).size.height / 2 - 50,
        width: 100,
        height: 100,
        child: Container(
          color: Colors.blue,
          child: Center(child: Text('中sas间')),
        ),
      ),
    ],
  ),
);
```


你好，这是Bing。我可以帮助你学习flutter。😊

如果你想要让BottomNavigationBar在上滑时消失，你可以使用ScrollController来监听滚动方向¹²³，然后根据滚动方向设置BottomNavigationBar的高度或可见性¹²³。你还可以使用AnimatedContainer或其他动画组件来给BottomNavigationBar添加过渡效果¹²。

例如，如果你想要让BottomNavigationBar在上滑时以渐隐的方式消失，在下滑时以渐显的方式出现，你可以写下面的代码：

```dart
class MyHomePage extends StatefulWidget {
  @override
  _MyHomePageState createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  ScrollController _scrollController;
  bool _isVisible;

  @override
  void initState() {
    super.initState();
    _isVisible = true;
    _scrollController = ScrollController();
    _scrollController.addListener(() {
      if (_scrollController.position.userScrollDirection ==
          ScrollDirection.reverse) {
        // Scrolling down
        if (_isVisible) {
          setState(() {
            _isVisible = false;
          });
        }
      }
      if (_scrollController.position.userScrollDirection ==
          ScrollDirection.forward) {
        // Scrolling up
        if (!_isVisible) {
          setState(() {
            _isVisible = true;
          });
        }
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: ListView.builder(
        controller: _scrollController,
        itemCount: 100,
        itemBuilder: (context, index) => ListTile(
          title: Text('Item $index'),
        ),
      ),
      bottomNavigationBar: AnimatedOpacity(
        opacity: _isVisible ? 1.0 : 0.0,
        duration: Duration(milliseconds: 300),
        child: BottomNavigationBar(
          items: [
            BottomNavigationBarItem(
              icon: Icon(Icons.home),
              label: 'Home',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.favorite),
              label: 'Favorite',
            ),
            BottomNavigationBarItem(
              icon: Icon(Icons.settings),
              label: 'Settings',
            ),
          ],
        ),
      ),
    );
  }
}
```

Source: Conversation with Bing, 3/20/2023(1) Hide Bottom Navigation bar on Scroll in Flutter - Stack Overflow. https://stackoverflow.com/questions/50353640/hide-bottom-navigation-bar-on-scroll-in-flutter Accessed 3/20/2023.
(2) How to hide BottomNavigationBar when scrolling - Flutter. https://stackoverflow.com/questions/53930742/how-to-hide-bottomnavigationbar-when-scrolling-flutter Accessed 3/20/2023.
(3) How to hide bottom navigation bar when scrolling in Flutter. https://gist.github.com/NeatSnippets/921b8a758fe5a3fd4b0ab9021ac90c2b Accessed 3/20/2023.
(4) scroll_to_hide_bottom_navigation_bar | Flutter Package. https://pub.dev/packages/scroll_to_hide_bottom_navigation_bar Accessed 3/20/2023.
(5) Everything about the BottomNavigationbar in Flutter - Medium. https://medium.com/flutter-community/everything-about-the-bottomnavigationbar-in-flutter-e99e5470dddb Accessed 3/20/2023.