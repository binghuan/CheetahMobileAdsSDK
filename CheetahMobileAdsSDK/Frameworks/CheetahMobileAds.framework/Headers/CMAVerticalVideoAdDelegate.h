//
//  CMAVerticalVideoAdDelegate.h
//  CheetahMobileAds
//
//  Created by Vincent｀Sun on 2016/11/18.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CMAVerticalVideoAd, CMARequestError;

@protocol CMAVerticalVideoAdDelegate <NSObject>

@optional

- (void)verticalVideoAdDidReceiveAd:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAdDidOpen:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAdDidStartPlaying:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAdWillClose:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAdWillLeaveApplication:(CMAVerticalVideoAd *)verticalVideoAd;

- (BOOL)verticalVideoLearnMoreBtnClicked:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAdVCDidVerticalUser:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoOffTime:(CMAVerticalVideoAd *)verticalVideoAd;

- (void)verticalVideoAd:(CMAVerticalVideoAd *)verticalVideoAd
didFailToLoadWithError:(CMARequestError *)error;

@end
