//
//  ZXTableCellProtocol.h
//  ZXEasyListDemo
//
//  Created by Simon on 2020/2/24.
//  Copyright © 2020 ZX Shang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZXEasyCommonInfo.h"

@protocol ZXTableCellConfig;

NS_ASSUME_NONNULL_BEGIN

@protocol ZXTableCellProtocol <NSObject>

@optional


///  传递数据给cell(根据p配置对象拿到数据更新UI)
/// @param config  配置对象
/// @param indexPath indexPath
/// @param commonInfo 公共信息
- (void)zxel_setCellConfig:(id<ZXTableCellConfig>)config indexPath:(NSIndexPath *)indexPath commonInfo:(ZXEasyCommonInfo *)commonInfo;

- (void)zxel_setCellConfig:(id<ZXTableCellConfig>)config;


///  获取cell高度
/// @param config 配置对象
/// @param reuseIdentifier 复用标识
/// @param indexPath indePath
/// @param commonInfo 公共信息
/// @return 高度
+ (CGFloat)zxel_heightForCellWithConfig:(id<ZXTableCellConfig>)config reuseIdentifier:(NSString *)reuseIdentifier indexPath:(NSIndexPath *)indexPath commonInfo:(ZXEasyCommonInfo *)commonInfo;

+ (CGFloat)zxel_heightForCellWithConfig:(id<ZXTableCellConfig>)config reuseIdentifier:(NSString *)reuseIdentifier indexPath:(NSIndexPath *)indexPath;








@end

NS_ASSUME_NONNULL_END
