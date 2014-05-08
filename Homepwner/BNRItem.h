//
//  BNRItem.h
//  RandomItems
//
//  Created by John  on 4/4/14.
//  Copyright (c) 2014 Crescendo. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BNRItem : NSObject <NSCoding>

@property (nonatomic,copy) NSString *itemName;
@property (nonatomic,copy) NSString *serialNumber;
@property (nonatomic) int valueInDollars;
@property (nonatomic,readonly,strong) NSDate *dateCreated;
@property (nonatomic, copy) NSString *itemKey;
@property (nonatomic, strong) UIImage *thumbnail;
- (void)setThumbnailFromImage:(UIImage *)image;

+ (instancetype)randomItem;

// Designated initializer for BNRItem
- (instancetype)initWithItemName:(NSString *)name
                    valueInDollars:(int)value
                    serialNumber:(NSString *)sNumber;

- (instancetype)initWithItemName:(NSString *)name;





@end
