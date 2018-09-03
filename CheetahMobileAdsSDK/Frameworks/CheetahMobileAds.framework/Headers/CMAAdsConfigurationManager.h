//
//  CMAAdsConfigurationManager.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/5/4.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CMAAdsConfiguration;

FOUNDATION_EXTERN NSString * const kCMAAdsConfigCacheName;

@interface CMAAdsConfigurationManager : NSObject

+ (instancetype)sharedManager;
- (void)loadConfig;

@property (nonatomic) CMAAdsConfiguration *config;
@property (nonatomic) BOOL isTest;

@end
