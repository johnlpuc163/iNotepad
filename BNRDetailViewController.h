//
//  BNRDetailViewController.h
//  Homepwner
//
//  Created by John  on 4/10/14.
//  Copyright (c) 2014 Crescendo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface BNRDetailViewController : UIViewController

@property (nonatomic,strong) BNRItem *item;
- (instancetype)initForNewItem:(BOOL)isNew;
@property (nonatomic, copy) void (^dismissBlock)(void);

@end
