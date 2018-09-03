//
//  CMAGiftBoxViewDelegate.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/6/24.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CMAGiftBoxView, CMARequestError;

@protocol CMAGiftBoxViewDelegate <NSObject>

@optional

#pragma mark - Request Lifecycle Notifications

- (void)giftBoxViewDidLoadAd:(CMAGiftBoxView *)giftBoxView;

- (void)giftBoxView:(CMAGiftBoxView *)giftBoxView didFailToLoadAdWithError:(CMARequestError *)error;

#pragma mark - Display Lifecycle Notifications

- (void)giftBoxViewWillPresentScreen:(CMAGiftBoxView *)giftBoxView;

- (void)giftBoxViewWillDismissScreen:(CMAGiftBoxView *)giftBoxView;

- (void)giftBoxViewWillLeaveApplication:(CMAGiftBoxView *)giftBoxView;

- (BOOL)giftBoxViewDidClicked:(NSURL *)actionURL;

@end
