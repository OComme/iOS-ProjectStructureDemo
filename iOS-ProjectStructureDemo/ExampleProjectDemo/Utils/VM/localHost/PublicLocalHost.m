//
//  PublicLocalHost.m
//  ExampleProjectDemo
//
//  Created by BlanBok on 2018/1/24.
//  Copyright © 2018年 juyuanGroup. All rights reserved.
//

#import "PublicLocalHost.h"

@implementation PublicLocalHost

+ (void)Fetch_TestDataWithParaments:(NSDictionary *)paraments completion:(void (^)(NSDictionary * _Nonnull))completion
{
//    NSDictionary *localData = [NSDictionary dictionaryWithContentsOfFile:[[NSBundle mainBundle]pathForResource:@"LocalHostData" ofType:@"plist"]];

    if (completion) {
        completion(@{@"object":@[]});
    }
}

@end
