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

![gif](https://dsm04pap003files.storage.live.com/y4m6PrL1DiA-43fGVBYSGi5Rn2FYF6cahqcxGPewhJzVDC9HE-3MZB2n7GNsk017VSEkfhJKgn7aHzBqRWWim5d3c8qibPQSHw1WJqJvdkJJml_HC25dAuzY7Xn6eCP3g9UpLytBaE9VZU-L7GHNY_fuL59OqDQQ2V2qa7NdV1aRx8DyVZCs2hWtb2QAC_TP4WX?width=620&height=1080&cropmode=none)