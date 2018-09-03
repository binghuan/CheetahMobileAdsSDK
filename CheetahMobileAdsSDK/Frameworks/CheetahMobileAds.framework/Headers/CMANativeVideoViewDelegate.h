//
//  CMANativeVideoViewDelegate.h
//  CheetahMobileAds
//
//  Created by 李 柯良 on 16/5/18.
//  Copyright © 2016年 cheetahmobile. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CMANativeVideoView, CMARequestError;
@protocol CMANativeVideoViewDelegate <NSObject>

@optional

#pragma mark - Request Lifecycle Notifications

- (void)nativeVideoViewDidLoadAd:(CMANativeVideoView *)view;

- (void)nativeVideoView:(CMANativeVideoView *)view didFailToLoadAdWithError:(CMARequestError *)error;

#pragma mark - Display Lifecycle Notifications

- (void)nativeVideoViewDidStartPlaying:(CMANativeVideoView *)view;

- (void)nativeVideoViewDidStopPlaying:(CMANativeVideoView *)view;

- (void)nativeVideoViewDidEnterFullScreen:(CMANativeVideoView *)view;

- (void)nativeVideoViewDidExitFullScreen:(CMANativeVideoView *)view;

- (void)nativeVideoViewDidDidLoadVideoFailed:(CMANativeVideoView *)view;

@end
