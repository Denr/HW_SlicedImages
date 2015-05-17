//
//  NetManager.h
//  HW_SlicedImages
//
//  Created by Admin on 5/18/15.
//  Copyright (c) 2015 ITIS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Manager : NSObject
+ (instancetype)sharedInstance;

- (void)getTitles:(void(^)(NSArray *, NSError *))completion;
@end
