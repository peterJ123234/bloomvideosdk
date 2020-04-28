//
//  BloomVideoProtocols.h
//  BloomVideoSDK
//
//  Created by 兵伍 on 2020/4/22.
//  Copyright © 2020 兵伍. All rights reserved.
//

#ifndef BloomVideoProtocols_h
#define BloomVideoProtocols_h

@protocol BloomVideoPlayerProtocol <NSObject>
// 继续播放
- (void)resume;
// 暂停
- (void)pause;
// 如果是播放则暂停，如果是暂停则播放
- (void)resumeOrPause;
// 停止
- (void)stop;
@end

@class UIView;
@class NSDictionary;
@class NSError;

@protocol BloomVideoFeedViewProtocol <NSObject>
// 重新加载数据
- (void)reloadData;
// 清除数据
- (void)cleanData;
@end

@protocol BloomVideoFeedViewDelegate <NSObject>

// 返回播放器上层的工具视图
- (UIView *)bmv_playerToolViewForInfo:(NSDictionary *)video;

// 播放器状态回调
- (void)bmv_playerOnPrepare:(id<BloomVideoPlayerProtocol>)player;
- (void)bmv_playerOnPlaying;
- (void)bmv_playerOnPause;
- (void)bmv_playerOnStop;
- (void)bmv_playerPlayFinished;
- (void)bmv_playerPlayError:(NSError *)error;

@end

#endif /* BloomVideoProtocols_h */
