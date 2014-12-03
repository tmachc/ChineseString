//
//  pinyin.h
//  Tableview
//
//  Created by tmachc on 14-11-25.
//
//

#ifndef Tableview_pinyin_h
#define Tableview_pinyin_h


/*
 * // Example
 *
 * #import "pinyin.h"
 *
 * NSString *hanyu = @"中文测试文字！";
 * for (int i = 0; i < [hanyu length]; i++)
 * {
 *     printf("%c", pinyinFirstLetter([hanyu characterAtIndex:i]));
 * }
 *
 */
#define ALPHA    @"ABCDEFGHIJKLMNOPQRSTUVWXYZ#"

char pinyinFirstLetter(unsigned short hanzi);

#endif
