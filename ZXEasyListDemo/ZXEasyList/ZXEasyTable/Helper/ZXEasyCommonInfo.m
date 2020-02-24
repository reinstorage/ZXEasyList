//
//  ZXEasyCommonInfo.m
//  ZXEasyListDemo
//
//  Created by Simon on 2020/2/24.
//  Copyright © 2020 ZX Shang. All rights reserved.
//

#import "ZXEasyCommonInfo.h"

@implementation ZXEasyCommonInfo

-(instancetype)init{
    
    if (self = [super init]) {
        CGSize size = UIScreen.mainScreen.bounds.size;
        _maxWidth  = size.width;
        _maxHeight = size.height;
    }
    return self;
}

@end
