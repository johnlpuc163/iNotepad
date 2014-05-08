//
//  BNRImageStore.h
//  Homepwner
//
//  Created by John  on 4/11/14.
//  Copyright (c) 2014 Crescendo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRImageStore : NSObject

+ (instancetype)sharedStore;
- (void)setImage:(UIImage *)image forKey:(NSString *)key;
- (UIImage *)imageForKey:(NSString *)key;
- (void)deleteImageForKey:(NSString *)key;

@end
