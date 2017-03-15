/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_TrackListProvider.h"
#import "VK_SimpleTrackListProvider.h"
#import "VK_ShuffleableTrackListProvider.h"

@class VK_TrackListProviderOptions, NSString, NSArray;

@protocol VK_ShuffleableTrackListProvider <VK_TrackListProvider>
-(void)unshuffleFromTrack:(id)track;
-(void)shuffleFromTrack:(id)track;
@end

__attribute__((visibility("hidden")))
@interface VK_ShuffleableTrackListProvider : VK_SimpleTrackListProvider <VK_ShuffleableTrackListProvider> {
	BOOL _shuffled;
}
@property(readonly, assign, nonatomic) id tracksFilter;
@property(readonly, assign, nonatomic) VK_TrackListProviderOptions* options;
@property(readonly, assign, nonatomic) NSArray* tracks;
@property(readonly, assign, nonatomic) BOOL isCanFetch;
@property(readonly, assign, nonatomic) BOOL isFetching;
@property(readonly, assign, nonatomic) BOOL isAllDataLoaded;
@property(readonly, assign, nonatomic) id customData;
@property(readonly, assign, nonatomic) id actualData;
@property(readonly, assign, nonatomic) id data;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL shuffled;
-(void)internalUnshuffleFromTrack:(id)track;
-(void)internalShuffleFromTrack:(id)track;
-(id)internalOptions;
-(void)internalSetup;
-(void)unshuffleFromTrack:(id)track;
-(void)shuffleFromTrack:(id)track;
@end
