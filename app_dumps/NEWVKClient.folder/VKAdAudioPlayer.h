/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MTRGInstreamAudioAdPlayer.h"

@class NSString, AVPlayerItem, AVPlayer;
@protocol MTRGInstreamAudioAdPlayerDelegate;

__attribute__((visibility("hidden")))
@interface VKAdAudioPlayer : XXUnknownSuperclass <MTRGInstreamAudioAdPlayer> {
	BOOL _playing;
	id<MTRGInstreamAudioAdPlayerDelegate> adPlayerDelegate;
	float volume;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	double adAudioTimeElapsed;
	double adAudioDuration;
}
@property(assign, nonatomic) float volume;
@property(assign, nonatomic) __weak id<MTRGInstreamAudioAdPlayerDelegate> adPlayerDelegate;
@property(readonly, assign, nonatomic) double adAudioTimeElapsed;
@property(readonly, assign, nonatomic) double adAudioDuration;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain) AVPlayerItem* playerItem;
@property(retain) AVPlayer* player;
@property(assign, nonatomic) BOOL playing;
-(void).cxx_destruct;
-(void)startPlayback;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)stopAdAudio;
-(void)resumeAdAudio;
-(void)pauseAdAudio;
-(void)playAdAudioWithUrl:(id)url;
@end

