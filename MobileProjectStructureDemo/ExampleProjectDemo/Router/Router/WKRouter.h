//
//  WKRouter.h
//  ExampleProjectDemo
//
//  Created by admin on 2017/9/29.
//  Copyright © 2017年 juyuanGroup. All rights reserved.
//
/*
 创建人：OComme
 功能描述：app的业务交换器
 所处位置：app->router
 创建版本：V 1.0.0
 --修改人：
 修改版本：
 修改描述：
 */
#import <Foundation/Foundation.h>
#import "WKKeyWindowMaster.h"
///控制模型
#define CUSTOM_APP_DEFAULT_CONTROLMODEL [WKRouter sharedRouter]
@interface WKRouter : NSObject
+ (instancetype _Nonnull)sharedRouter;

@property (nonnull,nonatomic,strong) WKKeyWindowMaster *keyWindowMaster;
@end
