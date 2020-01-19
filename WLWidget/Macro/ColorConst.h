//
//  ColorConst.h
//  WLForm
//
//  Created by 刘光强 on 2018/5/3.
//  Copyright © 2018年 quangqiang. All rights reserved.
//

#ifndef ColorConst_h
#define ColorConst_h

#define RGB(r, g, b) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:1.0]
#define RGBAlpha(r, g, b, a) [UIColor colorWithRed:((r) / 255.0) green:((g) / 255.0) blue:((b) / 255.0) alpha:(a)]

#define HexRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
#define HexRGBAlpha(rgbValue, a) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:(a)]

#define random_color RGB(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))

/// 常用颜色
#define red_color       [UIColor redColor]
#define black_color     [UIColor blackColor]
#define blue_color      [UIColor blueColor]
#define brown_color     [UIColor brownColor]
#define clear_color     [UIColor clearColor]
#define darkGray_color  [UIColor darkGrayColor]
#define darkText_color  [UIColor darkTextColor]
#define white_color     [UIColor whiteColor]
#define yellow_color    [UIColor yellowColor]
#define orange_color    [UIColor orangeColor]
#define purple_color    [UIColor purpleColor]
#define lightText_color [UIColor lightTextColor]
#define lightGray_color [UIColor lightGrayColor]
#define green_color     [UIColor greenColor]
#define gray_color      [UIColor grayColor]
#define magenta_color   [UIColor magentaColor]

/// 设计规范

// 主体颜色
#define themeColor  HexRGB(0x1478F0)

// 主色辅助色
#define subThemeColor  HexRGB(0xE4E8FC)

// 背景颜色
#define bgColor HexRGB(0xF2F3F5)

// 卡片浅灰色背景
#define cardGrayBgColor HexRGB(0xF7F7F7)

// 浅灰盒子背景颜色
#define lightGrayBgColor HexRGB(0xF6F6F6)

// 分割线颜色
#define sepLineColor HexRGB(0xe6e6e6)

// 组间分割线
#define sectionSepLineColor HexRGB(0xF7F7FB)

// 999灰色
#define text999GrayColor HexRGB(0x999999)

// 浅灰色字体
#define textLightGrayColor HexRGB(0x9b9b9b)

// 深灰色
#define textDarkGrayColor HexRGB(0x686868)

// 666灰色
#define text666GrayColor HexRGB(0x666666)

// AAA灰色
#define textAAAGrayColor HexRGB(0xAAAAAA)

// 深黑色
#define textDarkBlackColor HexRGB(0x222222)

// 文本框提示文字颜色
#define placeHolderColor HexRGB(0xF1F2F5)

// 文本框提示文字颜色
#define imagePlaceHolderColor HexRGB(0xF6F6F6)

// 弹出框背景颜色
#define modalBgColor  HexRGBAlpha(0x000000, 0.2)

#endif /* ColorConst_h */
