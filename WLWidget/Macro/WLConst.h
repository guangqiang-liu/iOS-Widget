//
//  WLConst.h
//  WLStaticList
//
//  Created by 刘光强 on 2018/4/26.
//  Copyright © 2018年 quangqiang. All rights reserved.
//

#ifndef WLConst_h
#define WLConst_h

#define SELF_BUNDLE [NSBundle bundleForClass:[self class]]
#define UIImageName(x) [UIImage imageNamed:x inBundle:SELF_BUNDLE compatibleWithTraitCollection:nil]

#define WEAK_SELF __weak typeof(self) weakSelf = self
#define STRONG_SELF __strong typeof(weakSelf) self = weakSelf

#define kDeviceVersion [[[UIDevice currentDevice] systemVersion] floatValue]

#define GQAlertShow(messageText,buttonName) \
UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"提示" message:(messageText) \
delegate:nil cancelButtonTitle:(buttonName) otherButtonTitles: nil];\
[alert show];

#endif /* WLConst_h */
