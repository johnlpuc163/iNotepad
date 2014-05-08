//
//  BNRItemCell.m
//  Homepwner
//
//  Created by John  on 4/17/14.
//  Copyright (c) 2014 Crescendo. All rights reserved.
//

#import "BNRItemCell.h"

@implementation BNRItemCell

- (IBAction)showImage:(id)sender
{
    if (self.actionBlock) {
        self.actionBlock();
    }
}

@end
