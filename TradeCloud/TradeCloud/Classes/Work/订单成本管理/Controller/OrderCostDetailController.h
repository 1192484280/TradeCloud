//
//  OrderCostDetailController.h
//  TradeCloud
//
//  Created by zhangming on 2018/4/16.
//  Copyright © 2018年 zhangming. All rights reserved.
//

#import "BaseViewController.h"

typedef void (^myblock)(void);

@interface OrderCostDetailController : BaseViewController

@property (nonatomic, copy) NSString *cost_id;

@property (assign, nonatomic) BOOL ifEdit;

@property (strong, nonatomic) myblock block;

- (void)returnMyBlock:(myblock)block;

@end
