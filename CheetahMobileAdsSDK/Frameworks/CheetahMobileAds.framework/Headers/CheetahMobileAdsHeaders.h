//
//  GoogleMobileAdsHeaders.h
//  Cheetah Mobile Ads SDK
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_6_0
#error The Google Mobile Ads SDK requires a deployment target of iOS 6.0 or later.
#endif

#if defined(__ARM_ARCH_7S__) && __ARM_ARCH_7S__
#error The Google Mobile Ads SDK doesn't support linking with armv7s. Remove armv7s from "ARCHS" (Architectures) in your Build Settings.
#endif

// Header files.
#import <CheetahMobileAds/CMABannerAdTypes.h>
#import <CheetahMobileAds/CMANativeVideoViewDelegate.h>
#import <CheetahMobileAds/CMAVerticalVideoAd.h>
#import <CheetahMobileAds/CMANativeAdLoader.h>
#import <CheetahMobileAds/CMABannerViewDelegate.h>
#import <CheetahMobileAds/CMAInterstitialVideoAdDelegate.h>
#import <CheetahMobileAds/CheetahMobileAds.h>
#import <CheetahMobileAds/CMANativeAdTypes.h>
#import <CheetahMobileAds/CMAInterstitial.h>
#import <CheetahMobileAds/CMANativeAd.h>
#import <CheetahMobileAds/CMAInterstitialVideoAd.h>
#import <CheetahMobileAds/CMANativeAdLoaderDelegate.h>
#import <CheetahMobileAds/CMAAdsConfigurationManager.h>
#import <CheetahMobileAds/CheetahMobileAdsHeaders.h>
#import <CheetahMobileAds/CheetahMobileAdsDefines.h>
#import <CheetahMobileAds/CMAInterstitialDelegate.h>
#import <CheetahMobileAds/CMASplashAd.h>
#import <CheetahMobileAds/CMAPosIDConfig.h>
#import <CheetahMobileAds/CMABannerView.h>
#import <CheetahMobileAds/CMAVerticalVideoAdDelegate.h>
#import <CheetahMobileAds/CMANativeVideoView.h>
#import <CheetahMobileAds/CMARewardVideoAdDelegate.h>
#import <CheetahMobileAds/CMANativeAdDelegate.h>
#import <CheetahMobileAds/CMARequestError.h>
#import <CheetahMobileAds/CMARewardVideoAd.h>
#import <CheetahMobileAds/CMASplashAdDelegate.h>
#import <CheetahMobileAds/CMAGiftBoxViewDelegate.h>
#import <CheetahMobileAds/CMAGiftBoxView.h>

