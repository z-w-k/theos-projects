/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VK_SDKRequest.h"

@class VK_SDKLyricsResponse;

__attribute__((visibility("hidden")))
@interface VK_SDKLyricsRequest : VK_SDKRequest {
	unsigned _lyricsId;
}
@property(readonly, assign, nonatomic) VK_SDKLyricsResponse* response;
@property(assign, nonatomic) unsigned lyricsId;
-(id)internalParseJson:(id)json withError:(id*)error;
-(id)internalCreateSDKRequest;
@end
