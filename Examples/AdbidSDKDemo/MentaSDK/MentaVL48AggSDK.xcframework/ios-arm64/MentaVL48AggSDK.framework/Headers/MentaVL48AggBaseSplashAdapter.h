//
//  MentaVL48AggBaseSplashAdapter.h
//  MentaVL48AggSDK
//
//  Created by chaizhiyong on 2026/1/21.
//

#import <Foundation/Foundation.h>
#import <MentaVL48AggSDK/MentaVL48AggSplashAdapterProtocol.h>
NS_ASSUME_NONNULL_BEGIN

@interface MentaVL48AggBaseSplashAdapter : NSObject<MentaVL48AggSplashAdapterProtocol>

@property (nonatomic, weak) id<MentaVL48AggSplashAdapterDelegate> adapterDelegate;
@property (nonatomic, assign) NSInteger maxLoadTime;
@property (nonatomic, assign) long eCPM;
@property (nonatomic, assign) BOOL shouldMuted;///是否静音，默认是静音
@property (nonatomic, copy, readonly) NSString *slotId;
@property (nonatomic, copy, readonly) NSString* currentRequestId;
@property (nonatomic, weak, nullable) UIViewController *viewController;

- (instancetype)initWithSlotId:(NSString *)slotId requestId:(NSString*)requestId NS_DESIGNATED_INITIALIZER;

- (void)updateCurrentRequestId:(NSString *)requestId;

- (instancetype)init NS_UNAVAILABLE;
//是否可以显示
- (BOOL)isReady;

+(BOOL)isExistSDK;

@end

NS_ASSUME_NONNULL_END
