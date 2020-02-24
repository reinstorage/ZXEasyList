//
//  ZXTableCellConfig.h
//  ZXEasyListDemo
//
//  Created by Simon on 2020/2/24.
//  Copyright © 2020 ZX Shang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZXTableCellProtocol.h"

@protocol ZXTableCellConfig <NSObject>

@required
/// cell的类型
-(Class<ZXTableCellProtocol>_Nullable)zxel_cellClass;

@optional

/// cell对应的数据模型
-(id _Nullable )zxel_model;

/// cell的默认高度(优先级低于ZXTableCellProtocol 代理方法返回的高度)
-(CGFloat)zxel_defaultHeight;


/// cell的复用标识符
-(NSString *_Nullable)zxel_cellReuseIdentifier;


@end

NS_ASSUME_NONNULL_BEGIN

/// 配置默认实现类,用于快速构建,若想拓展属性,可自行创建类实现ZXTableCellConfig协议
@interface ZXTableCellConfig : NSObject<ZXTableCellConfig>


/// cell类类型
@property(nonatomic, strong) Class<ZXTableCellProtocol>_Nullable cellClass;


/// cell对应的数据模型
@property(nonatomic, strong) id model;


/// cell的默认高度(优先级低于ZXTableCellprotocol代理方法返回的高度)
@property(nonatomic, assign) CGFloat defaultHeight;


/// cell的复用标识
@property(nonatomic, copy, nullable) NSString *cellReuseidentifier;



@end

NS_ASSUME_NONNULL_END
