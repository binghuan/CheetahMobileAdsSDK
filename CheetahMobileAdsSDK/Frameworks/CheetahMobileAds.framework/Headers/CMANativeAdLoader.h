//
//  CMANativeAdLoader.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/4/15.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CheetahMobileAds/CMAPosIDConfig.h>
#import <CheetahMobileAds/CMANativeAd.h>
#import <CheetahMobileAds/CMANativeAdLoaderDelegate.h>
#import <CheetahMobileAds/CMANativeAdTypes.h>

@interface CMANativeAdLoader : NSObject

- (instancetype)initWithPosIDConfig:(CMAPosIDConfig *)posIDConfig
                            adTypes:(NSArray *)adTypes NS_DESIGNATED_INITIALIZER;

- (void)loadAd;
- (CMANativeAd *)nextNativeAd;

@property (nonatomic, readonly) CMAPosIDConfig *posIDConfig;
@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic, weak) id<CMANativeAdLoaderDelegate> delegate;

@end
