/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MOScrollPagingMediatorDelegate.h"
#import "VKMCell.h"
#import "UIScrollViewDelegate.h"
#import "vkclient-Structs.h"

@class MOScrollPagingMediator, AutopagingGalleryView, AppsListDomain, NSString;

__attribute__((visibility("hidden")))
@interface AppsBannersGalleryCell : VKMCell <MOScrollPagingMediatorDelegate, UIScrollViewDelegate> {
	MOScrollPagingMediator* _mediator;
	AutopagingGalleryView* _scroller;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, retain, nonatomic) AppsListDomain* domain;
@property(assign, nonatomic, getter=isAutopagingEnabled) BOOL autopagingEnabled;
@property(readonly, retain, nonatomic) AutopagingGalleryView* scroller;
@property(readonly, retain, nonatomic) MOScrollPagingMediator* mediator;
+(CGSize)cellSize;
+(void)prerender:(id)prerender;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)scrollerTapped:(id)tapped;
-(void)pagingMediator:(id)mediator renderPage:(int)page;
-(void)preparePagesInScroller:(id)scroller fromDomain:(id)domain;
-(void)detach;
-(void)attach:(id)attach expectedReuse:(double)reuse;
-(BOOL)pagingMediatorShouldResetForScrollResize:(id)pagingMediator;
-(id)createSubviews;
-(id)createMediatorWithScroller:(id)scroller delegate:(id)delegate;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
