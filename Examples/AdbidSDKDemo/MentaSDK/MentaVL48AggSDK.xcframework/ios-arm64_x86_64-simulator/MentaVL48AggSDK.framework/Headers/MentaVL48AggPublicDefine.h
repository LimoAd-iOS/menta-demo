//
//  MentaVL48AggPublicDefine.h
//  MentaVL48AggSDK
//
//  Created by youzhadoubao on 2025/9/17.
//

#ifndef MentaVL48AdPublicDefine_h
#define MentaVL48AdPublicDefine_h

/// 交互类型
typedef NS_ENUM(NSInteger, MentaVL48AggAdRedirectionType) {
    MentaVL48AggAdRedirectionTypeUnknown,        //unknown type
    MentaVL48AggAdRedirectionTypeApp,            //open download page in-app
    MentaVL48AggAdRedirectionTypeWeb,            //open webpage in-app
    MentaVL48AggAdRedirectionTypeDeepLink,       //open deeplink
    MentaVL48AggAdRedirectionTypeAppStore,       //open appstore
    MentaVL48AggAdRedirectionTypeSafari,         //open safari
    MentaVL48AggAdRedirectionTypeError           //can`t open landing page
};

typedef NS_ENUM(NSInteger, MentaVL48AggLogLevel) {
    MentaVL48AggLogLevelNone = 0,   // 关闭所有日志
    MentaVL48AggLogLevelError,      // 仅错误日志（必须关注）
    MentaVL48AggLogLevelWarning,    // 警告日志（潜在问题）
    MentaVL48AggLogLevelInfo,       // 普通信息（流程节点）
    MentaVL48AggLogLevelDebug       // 调试日志（详细过程，仅Debug模式）
};

// SDK内部日志级别（不对外暴露）
typedef NS_ENUM(NSInteger, MentaVL48AggAdInternalLogLevel) {
    MentaVL48AggAdInternalLogLevelInternal = 100  // SDK内部调试日志（仅SDK开发时使用）
};

typedef NS_ENUM(NSInteger, MentaVL48AggSplashLandingPageType) {
    MentaVL48AggSplashLandingPageType_Unknow          = 0, // 未知
    MentaVL48AggSplashLandingPageType_lp    = 1, // 落地页（html/h5）
    MentaVL48AggSplashLandingPageType_Deeplink      = 2, // deep 类型广告落地页
    MentaVL48AggSplashLandingPageType_AppDownload    = 3, // 下载类广告（app下载页）
    MentaVL48AggSplashLandingPageType_WeChat          = 4, // 微信小程序/小游戏
    MentaVL48AggSplashLandingPageType_UniversalLink   = 5, // UniversalLink 唤起
    MentaVL48AggSplashLandingPageType_AppStore        = 6, // ios应用商店下载
};

typedef NS_ENUM(NSInteger, MentaVL48AggPlatform) {
    MentaVL48AggPlatform_Unknown = 0,
    MentaVL48AggPlatform_GDT = 1,
    MentaVL48AggPlatform_CSJ = 2,
    MentaVL48AggPlatform_Kuaishou = 3,
    MentaVL48AggPlatform_Baidu = 4,
    MentaVL48AggPlatform_AdMob = 5,
    MentaVL48AggPlatform_Pangle = 6,
    MentaVL48AggPlatform_AppLovin = 7,
    MentaVL48AggPlatform_Unity = 8,
    MentaVL48AggPlatform_IronSource = 9,
    MentaVL48AggPlatform_Mintegral = 10,
    MentaVL48AggPlatform_Vungle = 11,
    MentaVL48AggPlatform_Chartboost = 12,
    MentaVL48AggPlatform_LM = 13,
    MentaVL48AggPlatform_UBX = 14,
    MentaVL48AggPlatform_goMore = 15,
    MentaVL48AggPlatform_TaKu = 16,
    MentaVL48AggPlatform_FunLink = 17, //泛连
    MentaVL48AggPlatform_Ezviz = 18, //萤石
    MentaVL48AggPlatform_MS = 19, //美数
    MentaVL48AggPlatform_Sigmob = 20,
    MentaVL48AggPlatform_WM = 21
};

typedef NS_ENUM(NSInteger, MentaVL48AggType) {
    MentaVL48AggType_Splash              = 1, // 开屏
    MentaVL48AggType_Banner              = 2, // 横幅
    MentaVL48AggType_Interstitial        = 3, // 插屏
    MentaVL48AggType_Feed                = 4, // 信息流
    MentaVL48AggType_RewardVideo         = 5, // 激励视频
    MentaVL48AggType_Draw                = 6,  // draw
    MentaVL48AggType_Unknow              = 7, // 未知
};

static inline NSString *MentaVL48AggTypeString(MentaVL48AggType type) {
    switch (type) {
        case MentaVL48AggType_Splash: return @"splash";
        case MentaVL48AggType_Banner: return @"banner";
        case MentaVL48AggType_Interstitial: return @"interstitial";
        case MentaVL48AggType_Feed: return @"feed";
        case MentaVL48AggType_RewardVideo: return @"reward";
        case MentaVL48AggType_Draw: return @"draw";
        default: return @"unknown";
    }
}

/// 交互类型 21  摇一摇 (支持开屏、插屏、激励)
/// 22  扭一扭 (支持开屏、插屏、激励 部分设备不支持扭一扭)
/// 23  划一划 (支持开屏、插屏、激励)
/// 24  仅按钮可触发点击(支持开屏、插屏、激励视频)

typedef NS_ENUM(NSInteger, MentaVL48AggInteractionType) {
    MentaVL48AggInteractionType_AllClick       = 1, // 全屏点击
    MentaVL48AggInteractionType_AreaClick      = 24, // 区域点击
    MentaVL48AggInteractionType_Shake          = 21, // 摇一摇
    MentaVL48AggInteractionType_Slide          = 23, // 滑动
    MentaVL48AggInteractionType_SlideClick     = 5, // 划一划且点击
    MentaVL48AggInteractionType_Twist          = 22, // 扭一扭
    MentaVL48AggInteractionType_None           = 999
};

typedef NS_ENUM(NSInteger, MentaVL48AggEventType) {
    MentaVL48AggEventType_Impression           = 1, // 曝光
    MentaVL48AggEventType_Click                = 2, // 点击
};

typedef NS_ENUM(NSInteger, MentaVL48AggBidResult) {
    MentaVL48AggBidResult_Win                  = 1, // 竞胜
    MentaVL48AggBidResult_Loss                 = 2, // 竞败
    MentaVL48AggBidResult_Unknown              = 0, // 未知
};

// MARK: - Error

static NSString *const MentaVL48AggSDKErrorDomain = @"com.MentaVL48Agg.ad.sdk.error";

typedef NS_ENUM(NSInteger, MentaVL48AggErrorCode) {
    MentaVL48AggErrorCodeInitFailed = -5204,//广告Sdk未初始化
    MentaVL48AggErrorCodeParamMissing = 1010, // 参数缺失（通用参数缺失场景）
    MentaVL48AggErrorCodeAdTimeout = 1011, // 广告超时
    MentaVL48AggErrorCodeNoAd = 1012, // 无广告
    MentaVL48AggLoadErrorCode_ImageNoCache = 1013, // 无图片缓存
    MentaVL48AggLoadErrorCode_ImageUrlIsNil = 1014, // 图片URL为空
    MentaVL48AggLoadErrorCode_ImageSaveToLocalError = 1016, // 图片保存到本地失败
    MentaVL48AggLoadErrorCode_ImageDataWrong = 1017, // 图片数据错误
    MentaVL48AggLoadErrorCode_ImageLoadError = 1018, // 图片加载失败
    MentaVL48AggLoadErrorCode_VideoUrlIsNil = 1015, // 视频URL为空
    MentaVL48AggLoadErrorCode_VideoUrlError = 1019, // 视频URL错误
    MentaVL48AggErrorCode_VideoPlayError = 1020, // 视频播放错误
    MentaVL48AggErrorCodeAdNotReady = 1021, // 广告未准备好
    MentaVL48AggErrorCodeAdShowing = 1022, // 广告正在展示中
};

// 错误描述细化，明确指出是广告ID缺失
static inline NSString *MentaVL48AdErrorDescription(MentaVL48AggErrorCode code) {
    switch (code) {
        // ... 其他描述
        case MentaVL48AggErrorCodeInitFailed:
            return @"SDK 初始化失败";
        case MentaVL48AggErrorCodeParamMissing: 
            return @"缺少必要参数";
        case MentaVL48AggErrorCodeAdTimeout:
            return @"广告请求超时";
        case MentaVL48AggErrorCodeNoAd:
            return @"无广告";
        case MentaVL48AggLoadErrorCode_ImageNoCache:
            return @"无图片缓存";
        case MentaVL48AggLoadErrorCode_ImageUrlIsNil:
            return @"图片URL为空";
        case MentaVL48AggLoadErrorCode_ImageSaveToLocalError:
            return @"图片保存到本地失败";
        case MentaVL48AggLoadErrorCode_VideoUrlIsNil:
            return @"视频URL为空";
        case MentaVL48AggLoadErrorCode_VideoUrlError:
            return @"视频URL错误";
        case MentaVL48AggErrorCode_VideoPlayError:
            return @"视频播放错误";
        case MentaVL48AggErrorCodeAdNotReady:
            return @"广告未准备好";
        default: return @"未知错误";
    }
}

#endif /* MentaVL48AdPublicDefine_h */
