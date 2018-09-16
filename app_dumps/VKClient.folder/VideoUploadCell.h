/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RoundedProgressOverlayViewDelegate.h"
#import "VKMCell.h"

@class VKTimeout, VideoUploadEditAttachment, UILabel, RoundedProgressOverlayView, NSString, NSByteCountFormatter, VKMImageView;

__attribute__((visibility("hidden")))
@interface VideoUploadCell : VKMCell <RoundedProgressOverlayViewDelegate> {
	BOOL ProgressContext;
	BOOL StateContext;
	VKMImageView* _thumbnailView;
	UILabel* _videoTitleLabel;
	UILabel* _textProgressLabel;
	RoundedProgressOverlayView* _progressView;
	NSByteCountFormatter* _formatter;
	VKTimeout* _progressTimeout;
	VideoUploadEditAttachment* _attachment;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) VideoUploadEditAttachment* attachment;
@property(retain, nonatomic) VKTimeout* progressTimeout;
@property(readonly, retain, nonatomic) NSByteCountFormatter* formatter;
@property(readonly, retain, nonatomic) RoundedProgressOverlayView* progressView;
@property(readonly, retain, nonatomic) UILabel* textProgressLabel;
@property(readonly, retain, nonatomic) UILabel* videoTitleLabel;
@property(readonly, retain, nonatomic) VKMImageView* thumbnailView;
+(void)prerender:(id)prerender;
-(void).cxx_destruct;
-(void)progressViewDidCancel:(id)progressView;
-(void)detach;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)updateProgressWithAttach:(id)attach;
-(void)notificationThumbnail:(id)thumbnail;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(void)dealloc;
@end
