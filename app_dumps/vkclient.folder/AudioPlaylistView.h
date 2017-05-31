/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "vkclient-Structs.h"
#import "MultiImageLoaderDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "TextKitLabelInteractiveDefaultBehaviorDelegate.h"

@class UILabel, TextKitLabelInteractive, VKMImageView, UIView, VKMMultiImagePlaylistLoader, TextKitLabelInteractiveDefaultBehavior, UIButton, NSString, NSNumber;
@protocol VKMNavDelegate;

__attribute__((visibility("hidden")))
@interface AudioPlaylistView : XXUnknownSuperclass <TextKitLabelInteractiveDefaultBehaviorDelegate, MultiImageLoaderDelegate> {
	BOOL _expanded;
	VKMImageView* _cover;
	UIButton* _editCoverButton;
	UIButton* _artistButton;
	UIButton* _button;
	UIButton* _moreButton;
	UIButton* _expandButton;
	NSNumber* _artistOwnerId;
	int _artistNavType;
	id<VKMNavDelegate> _navDelegate;
	UILabel* _titleLabel;
	UILabel* _infoLabel;
	UILabel* _dateLabel;
	TextKitLabelInteractive* _descriptionLabel;
	UIView* _separatorLine;
	TextKitLabelInteractiveDefaultBehavior* _labelInteractiveDelegate;
	VKMMultiImagePlaylistLoader* _multiloader;
	NSString* _artistString;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<VKMNavDelegate> navDelegate;
@property(assign, nonatomic) int artistNavType;
@property(retain, nonatomic) NSNumber* artistOwnerId;
@property(retain, nonatomic) UIButton* expandButton;
@property(retain, nonatomic) UIButton* moreButton;
@property(retain, nonatomic) UIButton* button;
@property(retain, nonatomic) UIButton* artistButton;
@property(retain, nonatomic) UIButton* editCoverButton;
@property(retain, nonatomic) VKMImageView* cover;
@property(retain, nonatomic) NSString* artistString;
@property(readonly, assign, nonatomic, getter=isExpanded) BOOL expanded;
@property(readonly, retain, nonatomic) VKMMultiImagePlaylistLoader* multiloader;
@property(retain, nonatomic) TextKitLabelInteractiveDefaultBehavior* labelInteractiveDelegate;
@property(retain, nonatomic) UIView* separatorLine;
@property(retain, nonatomic) TextKitLabelInteractive* descriptionLabel;
@property(retain, nonatomic) UILabel* dateLabel;
@property(retain, nonatomic) UILabel* infoLabel;
@property(retain, nonatomic) UILabel* titleLabel;
-(void)multiImageLoader:(id)loader complete:(id)complete;
-(id)currentNavDelegate;
-(void)setEditCoverVisible:(BOOL)visible animated:(BOOL)animated;
-(void)updateCover:(id)cover;
-(void)expand;
-(id)createShuffleButton;
-(id)createFollowButton;
-(id)renderedDescTextFromPlaylist:(id)playlist profileName:(id)name;
-(void)updateArtistWithPlaylist:(id)playlist profileName:(id)name;
-(void)loadCover:(id)cover;
-(float)renderPlayist:(id)playist profileName:(id)name owner:(BOOL)owner;
-(id)coverPlaceholder;
-(id)createSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
