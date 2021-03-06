/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKStoreProduct.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKStoreProductSubscription : VKStoreProduct {
	NSNumber* _expires_date;
	NSString* _merchant;
	NSString* _subtitle;
	NSString* _merchant_title;
}
@property(retain, nonatomic) NSString* merchant_title;
@property(retain, nonatomic) NSString* subtitle;
@property(retain, nonatomic) NSString* merchant;
@property(retain, nonatomic) NSNumber* expires_date;
-(void).cxx_destruct;
-(BOOL)process:(id)process context:(id)context;
@end

