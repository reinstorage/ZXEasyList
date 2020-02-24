//
//  ZXEasyTableIMP.h
//  ZXEasyListDemo
//
//  Created by Simon on 2020/2/24.
//  Copyright © 2020 ZX Shang. All rights reserved.
//

#import "ZXTableSection.h"
#import "ZXEasyCommonInfo.h"

NS_ASSUME_NONNULL_BEGIN

/// 代理实现类,可以直接抽出来作为TableView的 delegate和dataSource 若想实现更多代理方法,继承该类在子类中拓展就行
@interface ZXEasyTableIMP : NSObject<UITableViewDelegate,UITableViewDataSource>


/// 数据源
@property (nonatomic, strong) NSMutableArray <ZXTableSection *> *sectionArray;


/// 公共对象,将会下发到Cell/Header/Footer
@property (nonatomic, strong) ZXEasyCommonInfo *commonInfo;


@end

NS_ASSUME_NONNULL_END
