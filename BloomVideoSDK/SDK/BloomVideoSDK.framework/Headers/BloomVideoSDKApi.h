//
//  BloomVideoSDKApi.h
//  BloomVideoSDK
//
//  Created by 兵伍 on 2020/4/21.
//  Copyright © 2020 兵伍. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BloomVideoSDKConfig.h"
#import "BloomVideoProtocols.h"

NS_ASSUME_NONNULL_BEGIN

@interface BloomVideoSDKApi : NSObject

/**
 * SDK版本 1.0.0（2）
 */
+ (NSString *)sdkVersion;

/**
 * SDK 初始化接口
 * @param config 初始化配置对象
 * @return YES：初始化成功；NO：初始化失败
 */
+ (BOOL)setupWithConfig:(BloomVideoSDKConfig *)config;

/**
 * 获取视频feed流视图
 * @param frame 视图的尺寸
 * @param vc 所添加的viewController
 * @param delegate 回调代理
 * @return 视频feed流视图
 */
+ (UIView<BloomVideoFeedViewProtocol> *)videoFeedViewWithFrame:(CGRect)frame viewController:(UIViewController *)vc delegate:(_Nullable id<BloomVideoFeedViewDelegate>)delegate;
@end

NS_ASSUME_NONNULL_END
