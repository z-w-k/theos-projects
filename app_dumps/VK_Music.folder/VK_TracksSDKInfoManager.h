/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_BaseManager.h"
#import "VK_NetworkReachabilitySubscriber.h"

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VK_TracksSDKInfoManager : VK_BaseManager <VK_NetworkReachabilitySubscriber> {
	NSMutableDictionary* _tracksInfoDictionary;
	NSString* _tracksInfoNetworkKey;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* tracksInfoNetworkKey;
@property(retain, nonatomic) NSMutableDictionary* tracksInfoDictionary;
+(id)currentManager;
-(void).cxx_destruct;
-(void)networkReachability:(id)reachability networkStatusChanged:(int)changed;
-(id)keyForTrack:(id)track;
-(id)updateTrackInfoForTracks:(id)tracks withFinalizeBlock:(id)finalizeBlock;
-(void)updateTrackInfo:(id)info forTrack:(id)track;
-(id)trackInfoForTrack:(id)track;
-(void)dealloc;
-(id)init;
-(id)updateTrackInfoForTracksIfNeeded:(id)tracksIfNeeded withFinalizeBlock:(id)finalizeBlock;
@end
