# Code 1

```dart
      floatingActionButton: FloatingActionButton(
        child: Icon(Icons.folder),
        onPressed: () {
          showDialog(context: context, builder: (context) => AlertDialog(
            title: Text('Add a new repository'),
            content: Text('Enter the URL of the repository you want to add.'),
            actions: [
              TextButton(
                child: Text('Cancel'),
                onPressed: () {
                  Navigator.of(context).pop();
                },
              ),
              TextButton(
                child: Text('Add'),
                onPressed: () {
                  Navigator.of(context).pop();
                },
              ),
            ],
          ));
        },
      ),
```

## result

<iframe src="https://onedrive.live.com/embed?cid=1B304A1ABB0A3E86&resid=1B304A1ABB0A3E86%21164607&authkey=AIFwE_5pu8rdRug" width="180" height="320" frameborder="0" scrolling="no" allowfullscreen></iframe>

