/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class VKFriend, StatContext;

__attribute__((visibility("hidden")))
@interface VKFriendBday : VKDomainDerived {
	BOOL _today;
	StatContext* _stat_context;
}
@property(assign, nonatomic) BOOL today;
@property(retain, nonatomic) StatContext* stat_context;
@property(retain, nonatomic) VKFriend* domain;
-(void).cxx_destruct;
-(Class)cellClass;
@end

