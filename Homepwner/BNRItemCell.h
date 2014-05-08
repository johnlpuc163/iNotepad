//
//  BNRItemCell.h
//  Homepwner
//
//  Created by John  on 4/17/14.
//  Copyright (c) 2014 Crescendo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRItemCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;
@property (nonatomic, copy) void (^actionBlock)(void);

@end
