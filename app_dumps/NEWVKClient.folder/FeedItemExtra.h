/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClient-Structs.h"

@class VKPostCaption, VKFeedActivity, NSMutableSet;

__attribute__((visibility("hidden")))
@interface FeedItemExtra : XXUnknownSuperclass <NSCopying> {
	BOOL _canSubscribe;
	BOOL _subscribed;
	VKFeedActivity* _activity;
	VKPostCaption* _caption;
	NSMutableSet* _expanded;
}
@property(retain, nonatomic) VKPostCaption* caption;
@property(retain, nonatomic) VKFeedActivity* activity;
@property(assign, nonatomic) BOOL subscribed;
@property(assign, nonatomic) BOOL canSubscribe;
@property(retain, nonatomic) NSMutableSet* expanded;
-(void).cxx_destruct;
-(void)clearExpanded;
-(BOOL)isExpanded:(id)expanded;
-(void)setExpanded:(BOOL)expanded iden:(id)iden;
-(id)init;
-(id)copyWithZone:(NSZone*)zone;
@end

