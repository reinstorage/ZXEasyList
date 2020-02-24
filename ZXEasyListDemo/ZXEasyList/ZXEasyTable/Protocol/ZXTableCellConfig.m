//
//  ZXTableCellConfig.m
//  ZXEasyListDemo
//
//  Created by Simon on 2020/2/24.
//  Copyright © 2020 ZX Shang. All rights reserved.
//

#import "ZXTableCellConfig.h"

@implementation ZXTableCellConfig

//MARK: life cycle
-(instancetype)init{
    if (self = [super init]) {
        _defaultHeight = -1;
    }
    return self;
}

//MARK: <ZXTableCellConfig>

- ( Class<ZXTableCellProtocol>)zxel_cellClass{
    return self.cellClass;
}

- (id)zxel_model{
    return self.model;
}

-(CGFloat)zxel_defaultHeight{
    return self.defaultHeight;
}

- (NSString *)zxel_cellReuseIdentifier{
    return self.cellReuseidentifier;
}

@end
