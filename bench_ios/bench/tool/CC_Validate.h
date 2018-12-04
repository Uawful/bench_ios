//
//  CC_Valiation.h
//  bench_ios
//
//  Created by gwh on 2017/7/27.
//  Copyright © 2017年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CC_Validate : NSObject

/**
 *  纯数字
 */
+ (BOOL)isPureInt:(NSString *)str;

/**
 *  只有数字字母和中文
 */
+ (BOOL)isMatchNumberWordChinese:(NSString *)str;

/**
 *  有中文
 */
+ (BOOL)hasChinese:(NSString *)str;

/** 手机号码验证*/
+ (BOOL)validateMobile:(NSString *)mobileStr;
/** 邮箱*/
+ (BOOL)validateEmail:(NSString *)emailStr;

@end
