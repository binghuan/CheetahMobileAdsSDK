//
//  CMAGiftBoxView.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/6/24.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMAPosIDConfig.h"
#import "CMAGiftBoxViewDelegate.h"

@interface CMAGiftBoxView : UIImageView

+ (instancetype)sharedInstance;
- (void)loadAd;
- (void)preload;
- (void)setShowTip:(BOOL)isEnabled;
- (void)setTipsShowIntervalTime:(NSInteger)hours;
- (void)setTipsShowingTime:(NSInteger)seconds;
- (void)resetToDefault;

@property (nonatomic, readonly, assign) BOOL isReady;
@property (nonatomic, readonly) NSString *adTitle;

@property (nonatomic, copy) CMAPosIDConfig *posIDConfig;
@property (nonatomic, weak) IBOutlet UIViewController *rootViewController;
@property (nonatomic, weak) IBOutlet id<CMAGiftBoxViewDelegate> delegate;
@property (nonatomic) UILabel *label4tooltips;// 20180817@BH_Lin: long press to show tooltip
@property (nonatomic) UIView *redDotView;// 20180820@BH_Lin: for Red Dot
@property (nonatomic) BOOL isToolTipsEnabled;// 20180820@BH_Lin: for ToolTips
@property (nonatomic) NSInteger intervalTimeToShowTips;// 20180820@BH_Lin: for ToolTips
@property (nonatomic) NSInteger durationToShowTips;// 20180820@BH_Lin: for ToolTips

@end
