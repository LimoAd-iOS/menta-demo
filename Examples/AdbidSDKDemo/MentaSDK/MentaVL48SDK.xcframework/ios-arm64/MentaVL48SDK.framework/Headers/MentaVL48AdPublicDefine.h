//
//  MentaVL48AdPublicDefine.h
//  LeadMoadAdSDK
//
//  Created by youzhadoubao on 2025/9/17.
//

#ifndef MentaVL48AdPublicDefine_h
#define MentaVL48AdPublicDefine_h

typedef NS_ENUM(NSInteger, MentaVL48AdLogLevel) {
    MentaVL48AdLogLevelNone = 0,   // 关闭所有日志
    MentaVL48AdLogLevelError,      // 仅错误日志（必须关注）
    MentaVL48AdLogLevelWarning,    // 警告日志（潜在问题）
    MentaVL48AdLogLevelInfo,       // 普通信息（流程节点）
    MentaVL48AdLogLevelDebug       // 调试日志（详细过程，仅Debug模式）
};

// SDK内部日志级别（不对外暴露）
typedef NS_ENUM(NSInteger, MentaVL48AdInternalLogLevel) {
    MentaVL48AdInternalLogLevelInternal = 100  // SDK内部调试日志（仅SDK开发时使用）
};

typedef NS_ENUM(NSInteger, MentaVL48SplashLandingPageType) {
    MentaVL48SplashLandingPageType_Unknow          = 0, // 未知 
    MentaVL48SplashLandingPageType_lp    = 1, // 落地页（html/h5）
    MentaVL48SplashLandingPageType_Deeplink      = 2, // deep 类型广告落地页
    MentaVL48SplashLandingPageType_AppDownload    = 3, // 下载类广告（app下载页）
    MentaVL48SplashLandingPageType_WeChat          = 4, // 微信小程序/小游戏
    MentaVL48SplashLandingPageType_UniversalLink   = 5, // UniversalLink 唤起
    MentaVL48SplashLandingPageType_AppStore        = 6, // ios应用商店下载
};

typedef NS_ENUM(NSInteger, MentaVL48InterstitialLandingPageType) {
    MentaVL48InterstitialLandingPageType_Unknow          = 0, // 未知
    MentaVL48InterstitialLandingPageType_lp    = 1, // 落地页（html/h5）
    MentaVL48InterstitialLandingPageType_Deeplink      = 2, // deep 类型广告落地页
    MentaVL48InterstitialLandingPageType_AppDownload    = 3, // 下载类广告（app下载页）
    MentaVL48InterstitialLandingPageType_WeChat          = 4, // 微信小程序/小游戏
    MentaVL48InterstitialLandingPageType_UniversalLink   = 5, // UniversalLink 唤起
    MentaVL48InterstitialLandingPageType_AppStore        = 6, // ios应用商店下载
};

typedef NS_ENUM(NSInteger, MentaVL48AdPlatform) {
    MentaVL48AdPlatform_Unknown = 0,
    MentaVL48AdPlatform_GDT = 1,
    MentaVL48AdPlatform_CSJ = 2,
    MentaVL48AdPlatform_Kuaishou = 3,
    MentaVL48AdPlatform_Baidu = 4,
    MentaVL48AdPlatform_AdMob = 5,
    MentaVL48AdPlatform_Pangle = 6,
    MentaVL48AdPlatform_AppLovin = 7,
    MentaVL48AdPlatform_Unity = 8,
    MentaVL48AdPlatform_IronSource = 9,
    MentaVL48AdPlatform_Mintegral = 10,
    MentaVL48AdPlatform_Vungle = 11,
    MentaVL48AdPlatform_Chartboost = 12,
    MentaVL48AdPlatform_LM = 13,
    MentaVL48AdPlatform_UBX = 14,
    MentaVL48AdPlatform_GorMore = 15,
    MentaVL48AdPlatform_TaKu = 16,
    MentaVL48AdPlatform_FunLink = 17,
    MentaVL48AdPlatform_Ezviz = 18, //萤石
    MentaVL48AdPlatform_MS = 19, //美数
    MentaVL48AdPlatform_Sigmob = 20,
};

typedef NS_ENUM(NSInteger, MentaVL48AdType) {
    MentaVL48AdType_Splash              = 1, // 开屏
    MentaVL48AdType_Banner              = 2, // 横幅
    MentaVL48AdType_Interstitial        = 3, // 插屏
    MentaVL48AdType_Feed                = 4, // 信息流
    MentaVL48AdType_RewardVideo         = 5, // 激励视频
    MentaVL48AdType_Draw                = 6, // draw
    MentaVL48AdType_Unknow              = 7, // 未知
};

static inline NSString *MentaVL48AdTypeString(MentaVL48AdType type) {
    switch (type) {
        case MentaVL48AdType_Splash: return @"splash";
        case MentaVL48AdType_Banner: return @"banner";
        case MentaVL48AdType_Interstitial: return @"interstitial";
        case MentaVL48AdType_Feed: return @"feed";
        case MentaVL48AdType_RewardVideo: return @"reward";
        case MentaVL48AdType_Draw: return @"draw";
        default: return @"unknown";
    }
}

/// 交互类型 21  摇一摇 (支持开屏、插屏、激励)
/// 22  扭一扭 (支持开屏、插屏、激励 部分设备不支持扭一扭)
/// 23  划一划 (支持开屏、插屏、激励)
/// 24  仅按钮可触发点击(支持开屏、插屏、激励视频)

typedef NS_ENUM(NSInteger, MentaVL48InteractionType) {
    MentaVL48InteractionType_AllClick       = 1, // 全屏点击
    MentaVL48InteractionType_AreaClick      = 24, // 区域点击
    MentaVL48InteractionType_Shake          = 21, // 摇一摇
    MentaVL48InteractionType_Slide          = 23, // 滑动
    MentaVL48InteractionType_SlideClick     = 5, // 划一划且点击
    MentaVL48InteractionType_Twist          = 22, // 扭一扭
    MentaVL48InteractionType_None           = 999
};

typedef NS_ENUM(NSInteger, MentaVL48EventType) {
    MentaVL48EventType_Impression           = 1, // 曝光
    MentaVL48EventType_Click                = 2, // 点击
};

// 摇一摇检测模式
// 单向：任一轴单次峰值跨阈值即可触发（更灵敏）
// 双向：窗口内任一轴出现 ≥N 个交替符号峰值（来回往返）才触发
typedef NS_ENUM(NSInteger, MentaVL48ShakeMode) {
    MentaVL48ShakeMode_OneWay = 1, // 单向（默认）
    MentaVL48ShakeMode_TwoWay = 2, // 双向（来回往返）
};

typedef NS_ENUM(NSInteger, MentaVL48BidResult) {
    MentaVL48BidResult_Win                  = 1, // 竞胜
    MentaVL48BidResult_Loss                 = 2, // 竞败
    MentaVL48BidResult_Unknown              = 0, // 未知
};

// MARK: - Error

static NSString *const MentaVL48AdSDKErrorDomain = @"com.leadmoad.ad.sdk.error";

typedef NS_ENUM(NSInteger, MentaVL48AdErrorCode) {
    MentaVL48AdErrorCodeInitFailed = 1100,
    MentaVL48AdErrorCodeParamMissing = 1010, // 参数缺失（通用参数缺失场景）
    MentaVL48AdErrorCodeAdTimeout = 1011, // 广告超时
    MentaVL48AdErrorCodeNoAd = 1012, // 无广告
    MentaVL48AdLoadErrorCode_ImageNoCache = 1013, // 无图片缓存
    MentaVL48AdLoadErrorCode_ImageUrlIsNil = 1014, // 图片URL为空
    MentaVL48AdLoadErrorCode_ImageSaveToLocalError = 1016, // 图片保存到本地失败
    MentaVL48AdLoadErrorCode_ImageDataWrong = 1017, // 图片数据错误
    MentaVL48AdLoadErrorCode_ImageLoadError = 1018, // 图片加载失败
    MentaVL48AdLoadErrorCode_VideoUrlIsNil = 1015, // 视频URL为空
    MentaVL48AdLoadErrorCode_VideoUrlError = 1019, // 视频URL错误
    MentaVL48AdErrorCode_VideoPlayError = 1020, // 视频播放错误
    MentaVL48AdErrorCodeAdNotReady = 1021, // 广告未准备好
    MentaVL48AdErrorCodeAdShowing = 1022, // 广告正在展示中
    MentaVL48AdPrepareErrorCodeAdTimeout = 1023, // 1.2s视频广告准备超时
    MentaVL48AdImageErrorCodeAdTimeout = 1024, // 兜底图片准备失败
    
};

// 错误描述细化，明确指出是广告ID缺失
static inline NSString *MentaVL48AdErrorDescription(MentaVL48AdErrorCode code) {
    switch (code) {
        // ... 其他描述
        case MentaVL48AdErrorCodeInitFailed:
            return @"SDK 初始化失败";
        case MentaVL48AdErrorCodeParamMissing: 
            return @"缺少必要参数";
        case MentaVL48AdErrorCodeAdTimeout:
            return @"广告请求超时";
        case MentaVL48AdErrorCodeNoAd:
            return @"无广告";
        case MentaVL48AdLoadErrorCode_ImageNoCache:
            return @"无图片缓存";
        case MentaVL48AdLoadErrorCode_ImageUrlIsNil:
            return @"图片URL为空";
        case MentaVL48AdLoadErrorCode_ImageSaveToLocalError:
            return @"图片保存到本地失败";
        case MentaVL48AdLoadErrorCode_VideoUrlIsNil:
            return @"视频URL为空";
        case MentaVL48AdLoadErrorCode_VideoUrlError:
            return @"视频URL错误";
        case MentaVL48AdErrorCode_VideoPlayError:
            return @"视频播放错误";
        case MentaVL48AdErrorCodeAdNotReady:
            return @"广告未准备好";
        default: return @"未知错误";
    }
}

#endif /* MentaVL48AdPublicDefine_h */
