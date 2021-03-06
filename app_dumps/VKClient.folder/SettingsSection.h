/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSFastEnumeration.h"
#import "VKClient-Structs.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsSection : XXUnknownSuperclass <NSFastEnumeration> {
	NSArray* _items;
	NSString* _header;
	NSString* _footer;
	float _footerHeight;
}
@property(readonly, assign) unsigned count;
@property(copy, nonatomic) NSString* footer;
@property(copy, nonatomic) NSString* header;
@property(copy, nonatomic) NSArray* items;
@property(assign, nonatomic) float footerHeight;
+(id)sectionWithItems:(id)items header:(id)header footer:(id)footer;
-(void).cxx_destruct;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(id)objectAtIndex:(unsigned)index;
-(id)initWithItems:(id)items header:(id)header footer:(id)footer;
@end

