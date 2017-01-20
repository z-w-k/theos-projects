/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomainDerived.h"

@class VKDomain, NSString;
@protocol VKSource;

__attribute__((visibility("hidden")))
@interface VKMenuSubtitleItem : VKDomainDerived {
	BOOL _verified;
	NSString* _subtitle;
}
@property(assign, nonatomic) BOOL verified;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) VKDomain<VKSource>* domain;
-(void)dealloc;
@end
