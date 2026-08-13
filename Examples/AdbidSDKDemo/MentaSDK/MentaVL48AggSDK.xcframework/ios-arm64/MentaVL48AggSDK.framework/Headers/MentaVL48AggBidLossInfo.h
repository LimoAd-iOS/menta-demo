#import <Foundation/Foundation.h>
#import <MentaVL48AggSDK/MentaVL48AggPublicDefine.h>

@interface MentaVL48AggBidLossInfo : NSObject

@property (nonatomic, assign) MentaVL48AggPlatform winnerPlatform;
@property (nonatomic, assign) NSInteger winnerPrice;

@end
