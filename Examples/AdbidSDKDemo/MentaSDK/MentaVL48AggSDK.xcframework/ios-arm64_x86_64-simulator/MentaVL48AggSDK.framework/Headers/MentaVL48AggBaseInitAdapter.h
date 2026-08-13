//
//  MentaVL48AggBaseInitAdapter.h
//  MentaVL48AggSDK
//
//  Created by chaizhiyong on 2026/5/2.
//

#import <Foundation/Foundation.h>
#import <MentaVL48AggSDK/MentaVL48AggAdInitArgument.h>
NS_ASSUME_NONNULL_BEGIN

@interface MentaVL48AggBaseInitAdapter : NSObject


- (void)initWithInitArgument:(MentaVL48AggAdInitArgument *)adInitArgument complete:(void (^__nullable)(BOOL success, NSError *_Nullable error))completion;

+ (nullable NSString *)sdkVersion;

+ (nullable NSString *)adapterVersion;

+ (nullable NSString *)adapterProtocolVersion;

@end

NS_ASSUME_NONNULL_END
