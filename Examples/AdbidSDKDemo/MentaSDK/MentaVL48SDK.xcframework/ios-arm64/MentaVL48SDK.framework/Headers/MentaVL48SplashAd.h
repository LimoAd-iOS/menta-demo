//
//  MentaVL48SplashAd.h
//  MentaVL48SDK
//
//  Created by youzhadoubao on 2025/9/17.
//

#import <Foundation/Foundation.h>
#import <MentaVL48SDK/MentaVL48AdBidLossInfo.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, MentaVL48SplashAdLandingPageType) {
    MentaVL48SplashAdLandingPageType_Unknow          = 0, // 未知
    MentaVL48SplashAdLandingPageType_lp    = 1, // 落地页（html/h5）
    MentaVL48SplashAdLandingPageType_Deeplink      = 2, // deep 类型广告落地页
    MentaVL48SplashAdLandingPageType_AppDownload    = 3, // 下载类广告（app下载页）
    MentaVL48SplashAdLandingPageType_WeChat          = 4, // 微信小程序/小游戏
    MentaVL48SplashAdLandingPageType_UniversalLink   = 5, // UniversalLink 唤起
    MentaVL48SplashAdLandingPageType_AppStore        = 6, // ios应用商店下载
};

@class MentaVL48SplashAd;
@protocol MentaVL48SplashAdDelegate <NSObject>
@optional
/// 开屏广告素材加载成功
- (void)splashAdDidLoad:(MentaVL48SplashAd *)splashAd;
/// 开屏广告加载失败
- (void)splashAd:(MentaVL48SplashAd *)splashAd didFailToLoadWithError:(NSError *)error;
/// 开屏广告成功展示
- (void)splashAdDidShow:(MentaVL48SplashAd *)splashAd;
/// 开屏广告展示失败
- (void)splashAd:(MentaVL48SplashAd *)splashAd didFailToShowWithError:(NSError *)error;
/// 开屏广告点击
- (void)splashAdDidClick:(MentaVL48SplashAd *)splashAd;
/// 开屏广告关闭
- (void)splashAdDidClose:(MentaVL48SplashAd *)splashAd;
///跳到站外边
- (void)splashAdDidJumpToAppOutside:(MentaVL48SplashAd *)splashAd interactionType:(MentaVL48SplashAdLandingPageType)interactionType;

@end

@interface MentaVL48SplashAd : NSObject

@property (nonatomic, weak) id<MentaVL48SplashAdDelegate> delegate;

// 广告最大请求时长，单位毫秒。默认5000 , 最小500毫秒
@property (nonatomic, assign) NSInteger maxLoadTime;

//是否可以展示
@property (nonatomic, assign, readonly, getter=isAdValid) BOOL valid;

/// 返回广告的eCPM，单位：分
@property (nonatomic, readonly) NSInteger eCPM;

/// 竞价素材信息，字段对齐聚合 material：appName/appPackageName/url/title/desc/jump_url/logo/ imageUrl videoUrl landingPageUrl
@property (nonatomic, copy, readonly, nullable) NSDictionary *material;

@property (nonatomic, strong, nullable) UIViewController *baseViewController;// 落地页设置

- (instancetype)initWithSlotId:(NSString *)slotId;

- (instancetype)initWithSlotId:(NSString *)slotId requestId:(NSString*)requestId;

/// 发起拉取广告请求
- (void)loadAd;
/// 通过token发起拉取广告请求
- (void)loadAdWithToken:(NSString*)token;

/*
 * 必须在主线程调用
 */
- (void)showAdToWindow:(UIWindow *)window;

/**
 * 展示开屏，并可附带底部品牌条。
 * @param window 展示窗口
 * @param bottomView 品牌条视图；传非空时，底部高度取该 view 的 frame/bounds 高度，上方留给广告。传 nil 则全屏展示，等同 showAdToWindow:
 */
- (void)showAdToWindow:(UIWindow *)window bottomView:(nullable UIView *)bottomView;

/// 竞胜/竞败上报
- (void)winNotice:(NSInteger)price;
- (void)lossNotice:(MentaVL48AdBidLossInfo *)info;

@end

NS_ASSUME_NONNULL_END
