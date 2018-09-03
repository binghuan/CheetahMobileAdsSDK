//
//  CMAPosIDConfig.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/4/14.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CMAPosIDConfig : NSObject<NSCopying, NSCoding>

- (instancetype)initWithOrionPosID:(NSString *)orionPosID liehuPosID:(NSString *)liehuPosID NS_DESIGNATED_INITIALIZER;
- (instancetype)initWithOrionPosID:(NSString *)orionPosID;
- (instancetype)intiWithLiehuPosID:(NSString *)liehuPosID;

- (NSString *)currentPosID;

@property (nonatomic, copy) NSString *orionPosID;
@property (nonatomic, copy) NSString *liehuPosID;

@end
