/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UINavigationControllerDelegate.h"

@class NavigationStats, NSString;

__attribute__((visibility("hidden")))
@interface DiscoverNavigationDelegate : XXUnknownSuperclass <UINavigationControllerDelegate> {
	NavigationStats* _navigationStats;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) NavigationStats* navigationStats;
+(id)delegateWithNavigationStats:(id)navigationStats;
-(void).cxx_destruct;
-(id)initWithNavigationStats:(id)navigationStats;
@end

