//
//  SKYDESDK.h
//  SKYDESDK
//
//  Created by yeven on 2017/2/6.
//  Copyright © 2017年 Skyworth. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
#error The SKYDE SDK requires a deployment target of iOS 7.0 or later.
#endif

//! Project version number for SKYDESDK.
FOUNDATION_EXPORT double SKYDESDKVersionNumber;

//! Project version string for SKYDESDK.
FOUNDATION_EXPORT const unsigned char SKYDESDKVersionString[];

#import <SKYDESDK/SKYDEManger.h>
#import <SKYDESDK/SKYDEConfig.h>
