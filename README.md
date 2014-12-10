ChineseString
=============

中文字符串分解出拼音首字母
  
用法：  
1、声明头文件  
```
  #import "ChineseString.h"  
  #import "pinyin.h"  
```
2、初始化
```
  ChineseString *chineseString = [[ChineseString alloc]init];
  chineseString.string = [NSString stringWithString:@""];
```
3、提取首字母
```
  NSString *pinYinResult = [NSString string];
  for(int j = 0; j < chineseString.string.length; j ++){
    NSString *singlePinyinLetter = [[NSString stringWithFormat:@"%c",(char)pinyinFirstLetter([chineseString.string characterAtIndex:j])] uppercaseString];
    pinYinResult = [pinYinResult stringByAppendingString:singlePinyinLetter];
  }
  chineseString.pinYin = pinYinResult;
```
