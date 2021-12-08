//
//  CISIMASdkModule.h
//  ConvivaIMASDK
//
//  Created by Sandeep Madineni on 12/10/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString *const FRAMEWORK_NAME;
FOUNDATION_EXPORT NSString *const MODULE_NAME;

@import ConvivaSDK;

@interface CISIMASdkModule : NSObject <CISStreamerProxyProtocol>

- (instancetype)initWithStreamer:(id)streamer
                            info:(NSDictionary*)info
                     adAnalytics:(CISAdAnalytics)adAnalytics
                  videoAnalytics:(CISVideoAnalytics)videoAnalytics
                          logger:(id<CISLoggerProtocol>)logger;

@end

NS_ASSUME_NONNULL_END
