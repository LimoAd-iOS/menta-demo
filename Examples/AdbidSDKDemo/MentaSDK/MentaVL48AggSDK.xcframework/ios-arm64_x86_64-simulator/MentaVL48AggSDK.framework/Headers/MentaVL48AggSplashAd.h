//
//  MentaVL48AggSplashAd.h
//  MentaVL48AggSDK
//
//  Created by youzhadoubao on 2025/9/17.
//

#import <Foundation/Foundation.h>
#import <MentaVL48AggSDK/MentaVL48AggBidLossInfo.h>
#import <MentaVL48AggSDK/MentaVL48AggAdInfoModel.h>

#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@class MentaVL48AggSplashAd;
@protocol MentaVL48AggSplashAdDelegate <NSObject>
@optional
/// 开屏广告素材加载成功
- (void)splashAdDidLoad:(MentaVL48AggSplashAd *)splashAd;
/// 开屏广告加载失败
- (void)splashAd:(MentaVL48AggSplashAd *)splashAd didFailToLoadWithError:(NSError *)error;
/// 开屏广告成功展示
- (void)splashAdDidShow:(MentaVL48AggSplashAd *)splashAd;
/// 开屏广告展示失败
- (void)splashAd:(MentaVL48AggSplashAd *)splashAd didFailToShowWithError:(NSError *)error;
/// 开屏广告点击
- (void)splashAdDidClick:(MentaVL48AggSplashAd *)splashAd;
/// 开屏广告关闭
- (void)splashAdDidClose:(MentaVL48AggSplashAd *)splashAd;
/// 广告完成转化(关闭落地页)
- (void)splashAdDidFinishConversion:(MentaVL48AggSplashAd *)interstitialAd interactionType:(MentaVL48AggAdRedirectionType)interactionType;

@end

@interface MentaVL48AggSplashAd : NSObject

@property (nonatomic, weak) id<MentaVL48AggSplashAdDelegate> delegate;

/// 返回广告的eCPM，单位：分
@property (nonatomic, readonly) NSInteger eCPM;
// 广告信息
@property (nonatomic, readonly) MentaVL48AggAdInfoModel* adInfo;
//广告素材
@property (nonatomic, copy, readonly) NSDictionary *material;

@property (nonatomic, strong, nullable) UIViewController *viewController;// 落地页设置

- (instancetype)initWithSlotId:(NSString *)slotId;

- (NSString*)getRequestId;

/// 发起拉取广告请求
- (void)loadAd;
/// 通过Token发起拉取广告请求
- (void)loadAdWithToken:(NSString *)token;

 /// 必须在主线程调用
- (void)showAdToWindow:(UIWindow *)window;

/**
 * 展示开屏，并可附带底部品牌条。
 * @param bottomView 品牌条视图；非空时广告占上方 4/5，底部 1/5 留给该 view。传 nil 等同 showAdToWindow:
 */
- (void)showAdToWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView;

/// price 二价（即竞败方最高价）
- (void)winNotice:(NSInteger)price;
/// info 竞胜方平台  竞胜方最高价
- (void)lossNotice:(MentaVL48AggBidLossInfo *)info;
///是否准备好，准备好了才能加载广告
- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END
