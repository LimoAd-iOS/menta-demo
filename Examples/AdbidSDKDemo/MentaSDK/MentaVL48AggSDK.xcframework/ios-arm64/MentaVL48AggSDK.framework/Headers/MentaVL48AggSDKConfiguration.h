//
//  MentaVL48AdSDKConfiguration.h
//  MentaVL48AggSDK
//
//  Created by youzhadoubao on 2025/9/17.
//

#import <Foundation/Foundation.h>
#import <MentaVL48AggSDK/MentaVL48AggPublicDefine.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdCustomPermissionController : NSObject
@property (nonatomic, assign, readwrite) BOOL allowPersonalizedAd; //是否允许个性化广告（基于用户画像推荐）
@property (nonatomic, assign, readwrite) BOOL allowLocation;//是否允许获取地理位置信息（用于地域化广告）

@property (nonatomic, assign, readwrite) BOOL allowShakeAd; //是否允许加载摇一摇广告（需传感器权限）

@property (nonatomic, assign, readwrite) BOOL allowRecordAudio;//是否允许使用录音权限（用于语音互动广告

@property (nonatomic, assign) BOOL allowUseIPAddress; //设置是否获取IP地址，YES表示获取，NO表示不获取

@end

typedef NS_ENUM(int, MentaVL48AggUserGender) {
    MentaVL48AggUserGenderUnknown = 0,  // 未知
    MentaVL48AggUserGenderMale    = 1,  // 男
    MentaVL48AggUserGenderFemale  = 2,  // 女
};

@interface MentaVL48AggSDKConfiguration : NSObject

@property (nonatomic, copy, readonly, class) NSString *sdkVersion;

@property (nonatomic, assign, readwrite) BOOL debugMode;

/// 默认MentaVL48AggAdLogLevelNone
@property (nonatomic, assign) MentaVL48AggLogLevel logLevel;

@property (nonatomic, copy) NSString *appID; //必传 构建Build对象，入参Sdk初始化参数
@property (nonatomic, copy) NSString *appChannel; //设置应用渠道

@property (nonatomic, copy) NSString *appVersion; //设置应用版本

@property (nonatomic, assign) NSInteger age; //年龄

@property (nonatomic, copy) NSString * userId; //设置用户ID

@property (nonatomic, copy) NSString * IDFA; //广告Id

@property (nonatomic, assign) MentaVL48AggUserGender gender; //设置性别（Male表示男性，Female表示女性）

@property (nonatomic, strong) AdCustomPermissionController *adCustomController;

@property (nonatomic, assign) BOOL logDirectSend;

+ (instancetype)configuration NS_SWIFT_NAME(configurationShared());

@end

NS_ASSUME_NONNULL_END
