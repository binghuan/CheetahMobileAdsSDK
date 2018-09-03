//
//  CMAVerticalVideoAd.h
//  CheetahMobileAds
//
//  Created by Vincent｀Sun on 2016/11/16.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CheetahMobileAds/CMAPosIDConfig.h>
#import "CMAVerticalVideoAdDelegate.h"

@interface CMAVerticalVideoAd : NSObject

@property (nonatomic, readonly, getter=isReady) BOOL ready;

@property (nonatomic, weak) id <CMAVerticalVideoAdDelegate> delegate;

@property (nonatomic, copy) NSURL *clickThroughURL;

@property (nonatomic, assign) BOOL isSkip;

@property (nonatomic, strong) CMAPosIDConfig * posIDConfig;

- (void)loadAdWithPosIDConfig:(CMAPosIDConfig *)posIDConfig;

- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end
