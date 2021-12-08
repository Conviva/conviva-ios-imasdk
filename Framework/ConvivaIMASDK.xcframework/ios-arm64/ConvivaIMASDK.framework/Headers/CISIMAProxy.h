//
//  CISIMAProxy.h
//  Pods
//
//  Created by Sandeep Madineni on 12/10/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@import ConvivaSDK;

@interface CISIMAProxy : NSObject

/// @brief Create IMA Proxy Creator object
///
/// \param adListener object using which we can register for ad related events.
/// \return Returns Conviva IMAProxy creator object

+ (id)createIMAProxy:(id)adListener;

@end

NS_ASSUME_NONNULL_END
