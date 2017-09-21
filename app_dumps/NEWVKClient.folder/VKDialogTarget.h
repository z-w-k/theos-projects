/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class NSArray, NSString, VKUser, VKDialog, StatsRef;

__attribute__((visibility("hidden")))
@interface VKDialogTarget : VKDomainDerived {
	BOOL _input;
	BOOL _dropOldAttachments;
	BOOL _refreshIfMulti;
	BOOL _fromPush;
	BOOL _skipStoringDrafts;
	VKUser* _user;
	NSString* _preEnteredText;
	NSArray* _attachments;
	StatsRef* _ref;
}
@property(retain, nonatomic) StatsRef* ref;
@property(assign, nonatomic) BOOL skipStoringDrafts;
@property(assign, nonatomic) BOOL fromPush;
@property(assign, nonatomic) BOOL refreshIfMulti;
@property(retain, nonatomic) NSArray* attachments;
@property(copy, nonatomic) NSString* preEnteredText;
@property(assign, nonatomic) BOOL dropOldAttachments;
@property(assign, nonatomic) BOOL input;
@property(retain, nonatomic) VKUser* user;
@property(retain, nonatomic) VKDialog* domain;
-(void).cxx_destruct;
-(id)setupRef:(id)ref;
-(id)setupFromPush;
-(id)setupRefreshMulti;
@end
